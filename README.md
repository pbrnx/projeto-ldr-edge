Projeto de Sensor de Luminosidade

Este projeto usa um sensor de luminosidade para monitorar a luminosidade do ambiente e acender LEDs em diferentes cores, dependendo do nível de luminosidade.

Materiais:

Sensor de luminosidade;
- LEDs verde, amarelo e vermelho;
- Buzzer;
- Resistor 220 ohms;
- Jumpers;
- Protoboard;
- Arduino.


Instruções de montagem:
- Conecte o pino GND do sensor de luminosidade ao GND do Arduino;
- Conecte o pino VCC do sensor de luminosidade ao 5V do Arduino;
- Conecte o pino S do sensor de luminosidade ao pino analógico A0 do Arduino;
- Conecte o LED verde ao pino digital 2 do Arduino, com um resistor 220 ohms em série;
- Conecte o LED amarelo ao pino digital 3 do Arduino, com um resistor 220 ohms em série;
- Conecte o LED vermelho ao pino digital 4 do Arduino, com um resistor 220 ohms em série;
- Conecte o buzzer ao pino digital 8 do Arduino.

![image](https://user-images.githubusercontent.com/128100284/230229840-f990581b-4a1a-4eff-9c35-c22ca07c1ebc.png)


Instruções de uso:
- Ligue o Arduino ao computador e abra o software Arduino IDE;
- Carregue o código do projeto para o Arduino;
- Abra o monitor serial na velocidade de transmissão de 9600 baud;
- Observe a luminosidade lida pelo sensor no monitor serial;
- Os LEDs e o buzzer serão acionados de acordo com a luminosidade lida:
- Se a luminosidade for igual a 969, o LED vermelho e o buzzer serão acionados;
- Se a luminosidade for maior que 50, o LED amarelo e o buzzer serão acionados;
- Caso contrário, o LED verde será acionado e o buzzer será desligado.
- Este projeto pode ser adaptado para diferentes faixas de luminosidade e outros usos, como monitorar a iluminação em uma sala ou ajustar o brilho de uma tela de um celular

Projeto no TinkerCad: https://www.tinkercad.com/things/0AicRcigr8p?sharecode=yazMtrcFmW-yE6EJa6KN19t-HWDiMz1aXbEnZCH1OxE



Projeto de Monitoramento de Ambiente
Este é um projeto simples de monitoramento ambiental que utiliza um Arduino Uno, um sensor de luminosidade, um sensor de temperatura e um sensor de umidade para monitorar as condições do ambiente.

Funcionamento
O projeto funciona da seguinte forma:

O sensor de luminosidade mede a luminosidade do ambiente e acende um LED verde se a luminosidade estiver alta o suficiente, um LED amarelo se a luminosidade estiver abaixo de um determinado limite, ou um LED vermelho se a luminosidade estiver muito alta.
O sensor de temperatura mede a temperatura do ambiente e a exibe no display LCD, juntamente com uma mensagem indicando se a temperatura está OK, alta ou baixa.
O sensor de umidade mede a umidade do ambiente e a exibe no display LCD, juntamente com uma mensagem indicando se a umidade está OK, alta ou baixa.
Além disso, o projeto conta com um buzzer que emite um sinal sonoro quando a luminosidade está abaixo do limite determinado.

Arquivos
O projeto é composto pelos seguintes arquivos:

monitoramento_ambiental.ino: o arquivo principal que contém o código do projeto.
LiquidCrystal_I2C.h: uma biblioteca para controlar o display LCD.
Wire.h: uma biblioteca para comunicação I2C.
Montagem
Para montar o projeto, siga os passos abaixo:

Conecte o sensor de luminosidade ao pino A0 do Arduino.
Conecte o LED verde ao pino 2 do Arduino, o LED amarelo ao pino 3 e o LED vermelho ao pino 4.
Conecte o buzzer ao pino 8 do Arduino.
Conecte o sensor de temperatura ao pino A1 do Arduino.
Conecte o sensor de umidade ao pino A2 do Arduino.
Conecte o display LCD ao Arduino seguindo as instruções do fabricante.
Funcionamento
Ao ligar o Arduino, o projeto iniciará o monitoramento do ambiente. Os resultados das medições serão exibidos no display LCD a cada 5 segundos.

Caso a luminosidade do ambiente esteja abaixo do limite determinado, o LED amarelo será acionado e o buzzer emitirá um sinal sonoro.

Se a temperatura estiver abaixo de 10°C, a mensagem "Temp. Baixa" será exibida no display, juntamente com o valor da temperatura. Se a temperatura estiver acima de 15°C, a mensagem "Temp. Alta" será exibida no display, juntamente com o valor da temperatura. Caso contrário, a mensagem "Temperatura OK" será exibida.

Se a umidade estiver abaixo de 50%, a mensagem "Umidade. Baixa" será exibida no display, juntamente com o valor da umidade. Se a umidade estiver acima de 70%, a mensagem "Umidade. Alta" será exibida no display, juntamente com o valor da umidade. Caso contrário, a mensagem "Umidade OK" será exibida.
