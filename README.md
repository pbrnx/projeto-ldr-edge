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

Projeto no TinkerCad: https://www.tinkercad.com/things/0AicRcigr8p?sharecode=yazMtrcFmW-yE6EJa6KN19t-HWDiMz1aXbEnZCH1OxE%2Ftarget_blank
