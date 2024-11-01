int GreenPin = 13; // Define a porta do pino verde como 13
int YellowPin = 12; // Define a porta do pino amarelo como 12
int RedPin = 11; // Define a porta do pino vermelho como 11

void setup (){
pinMode(GreenPin, OUTPUT); // Led verde
pinMode(YellowPin, OUTPUT); // Led amarelo
pinMode(RedPin, OUTPUT); // Led vermelho
}

void loop (){
digitalWrite(RedPin, HIGH); // Liga o pino vermelho
delay(6000); // Espera 6 segundos
digitalWrite(RedPin, LOW); // Desliga o pino vermelho

digitalWrite(YellowPin, HIGH); // Liga o pino amarelo
delay(2000); // Espera 2 segundos
digitalWrite(YellowPin, LOW); // Desliga o pino amarelo

digitalWrite(GreenPin, HIGH); // Liga o pino verde
delay(2000); // Espera 2 segundos
digitalWrite(GreenPin, LOW); // Desliga o pino verde

digitalWrite(GreenPin, HIGH); // Liga o pino verde
delay(2000); // Espera mais 2 segundos
digitalWrite(GreenPin, LOW); // Desliga o pino verde

digitalWrite(YellowPin, HIGH); // Liga o pino amarelo
delay(2000); // Espera 2 segundos
digitalWrite(YellowPin, LOW); // Desliga o pino amarelo
}