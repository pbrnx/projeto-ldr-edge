
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

![image](https://user-images.githubusercontent.com/128100284/234438584-a4a43d9a-e7f4-4083-be9d-68ba5596ebaf.png)


Projeto no TinkerCad: https://www.tinkercad.com/things/0AicRcigr8p?sharecode=yazMtrcFmW-yE6EJa6KN19t-HWDiMz1aXbEnZCH1OxE

