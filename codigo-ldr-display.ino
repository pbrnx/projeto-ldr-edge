#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int LDR_PIN = A0;
const int GREEN_LED_PIN = 2;
const int YELLOW_LED_PIN = 3;
const int RED_LED_PIN = 4;
const int BUZZER_PIN = 8;
const int TEMP_SENSOR_PIN = A1;
const int ALERT_THRESHOLD = 200;

double tempC = 0;
double tempF = 0;
int RawValue = 0;
int humiditysensorOutput = 0;

unsigned long previousTime = 0;
int buzzerState = LOW;

void setup() {
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}



void loop() {
  int lightValue = analogRead(LDR_PIN);

  if (lightValue >= 350) {
    digitalWrite(GREEN_LED_PIN, HIGH);
    digitalWrite(YELLOW_LED_PIN, LOW);
    digitalWrite(RED_LED_PIN, LOW);
  } else if (lightValue > ALERT_THRESHOLD) {
    digitalWrite(GREEN_LED_PIN, LOW);
    digitalWrite(YELLOW_LED_PIN, HIGH);
    digitalWrite(RED_LED_PIN, LOW);
  } else {
    digitalWrite(GREEN_LED_PIN, LOW);
    digitalWrite(YELLOW_LED_PIN, LOW);
    digitalWrite(RED_LED_PIN, HIGH);
    delay(3000);
    digitalWrite(BUZZER_PIN, HIGH);
    delay(3000);
    digitalWrite(BUZZER_PIN, LOW);
  }

  RawValue = analogRead(TEMP_SENSOR_PIN);
  double voltage = (RawValue / 1023.0) * 5000;
  tempC = (voltage - 500) / 10.0;
  tempF = (tempC * 1.8) + 32;
  Serial.print("Raw Value = ");
  Serial.print(RawValue);
  Serial.print("\t milli volts = ");
  Serial.print(voltage, 0);
  Serial.print("\t Temperature in C = ");
  Serial.print(tempC, 1);
  Serial.print("\t Temperature in F = ");
  Serial.println(tempF, 1);
  Serial.print("Luminosidade: ");
  Serial.println(lightValue);

  humiditysensorOutput = analogRead(A2);
  Serial.print("Humidity: ");
  Serial.print(map(humiditysensorOutput, 0, 1023, 10, 70));
  Serial.println("%");
  
  LiquidCrystal_I2C lcd(34, 16, 2); 
  
   if (map(humiditysensorOutput, 0, 1023, 10, 70) <= 50) {
    digitalWrite(RED_LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(BUZZER_PIN, HIGH);
    lcd.backlight();
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Umidade Baixa");
    lcd.setCursor(0, 1);
    lcd.print("Umid: ");
    lcd.print(map(humiditysensorOutput, 0, 1023, 10, 70));
    lcd.print("% /");
    digitalWrite(GREEN_LED_PIN, LOW);
    digitalWrite(YELLOW_LED_PIN, LOW);
    digitalWrite(RED_LED_PIN,HIGH);
    
    delay(2000);
}
  
  // set the LCD address to 0x3F for a 16 chars and 2 line display
  lcd.init(); // initialize the LCD
  lcd.backlight(); // turn on the backlight
  lcd.setCursor(1, 0);
  lcd.print("Temp: ");
  lcd.print(tempC, 1);
  lcd.print("C / ");
  lcd.setCursor(0, 1);
  lcd.print("Umid: ");
  lcd.print(map(humiditysensorOutput, 0, 1023, 10, 70));
  lcd.print("% /");
  
  
  
  delay(1000);
  
  
}
