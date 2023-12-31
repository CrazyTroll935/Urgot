#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>
#include <SoftwareSerial.h>
SoftwareSerial BT(10,11);

Adafruit_PWMServoDriver servos = Adafruit_PWMServoDriver(0x40); // Dirección de la placa del modulo PCA9685
unsigned int pos0=172;// ancho de pulso en cuentas para posicion 0°
unsigned int pos180=565;// ancho de pulso en cuentas para la posicion 180°

char a;

void setup(){
servos.begin();
servos.setPWMFreq(60);//Configuracion de la frecuencia del PWM
Serial.begin(9600);
BT.begin(38400);
}

void setServo(uint8_t n_servo, int angulo){
int duty;
duty=map(angulo, 0, 180, pos0, pos180);
servos.setPWM(n_servo, 0, duty);  // con esta funcion podemos enviar a cualquier servomotor al valor del angulo que queramos que se ubique
} 

void sentarse(){
setServo(1,90);
setServo(2,20);
setServo(3,90);
setServo(4,160);
setServo(5,90);
setServo(6,160);
setServo(7,90);
setServo(8,20);
setServo(9,90);
setServo(10,160);
setServo(11,90);
setServo(12,20);  
}

void pararse(){
setServo(1,90);
setServo(2,110);
setServo(3,90);
setServo(4,70);
setServo(5,90);
setServo(6,70);
setServo(7,90);
setServo(8,110);
setServo(9,90);
setServo(10,70);
setServo(11,90);
setServo(12,110);
}

void adelante(){
setServo(4,120);
setServo(8,80);
setServo(12,80);
setServo(9,60);
setServo(1,120);
setServo(5,90);
delay(100);
setServo(3,70);
setServo(7,110);
setServo(11,90);
setServo(4,70);
setServo(8,110);
setServo(12,110);
delay(100);
setServo(3,90);
setServo(7,90);
setServo(2,80);
setServo(10,120);
setServo(6,120);
delay(100);
setServo(9,120);
setServo(1,60);
setServo(5,150);
setServo(11,120);
delay(100);
setServo(2,110);
setServo(10,70);
setServo(6,70);
delay(100);
}

void atras(){
setServo(10,120);
setServo(6,120);
setServo(2,80);
setServo(3,60);
setServo(7,120);
setServo(11,90);
delay(100);
setServo(9,70);
setServo(1,110);
setServo(5,90);
setServo(10,70);
setServo(6,70);
setServo(2,110);
delay(100);
setServo(9,90);
setServo(1,90);
setServo(8,80);
setServo(4,120);
setServo(12,80);
delay(100);
setServo(7,120);
setServo(3,60);
setServo(11,120);
setServo(5,120);
delay(100);
setServo(8,110);
setServo(4,70);
setServo(12,110);
delay(100);
}

void baile(){
setServo(2,20);
setServo(4,160);
setServo(6,160);
setServo(8,20);
setServo(10,160);
setServo(12,20); 
delay(500);
setServo(1,25);
setServo(3,25);
setServo(5,25);
setServo(7,25);
setServo(9,25);
setServo(11,25);
delay(500);
setServo(1,155);
setServo(3,155);
setServo(5,155);
setServo(7,155);
setServo(9,155);
setServo(11,155);
delay(500); //termina 1
setServo(1,25);
setServo(3,25);
setServo(5,25);
setServo(7,25);
setServo(9,25);
setServo(11,25);
delay(500);
setServo(1,155);
setServo(3,155);
setServo(5,155);
setServo(7,155);
setServo(9,155);
setServo(11,155);
delay(500); //termina 2
setServo(1,25);
setServo(3,25);
setServo(5,25);
setServo(7,25);
setServo(9,25);
setServo(11,25);
delay(500);
setServo(1,155);
setServo(3,155);
setServo(5,155);
setServo(7,155);
setServo(9,155);
setServo(11,155);
delay(500); //termina 3
setServo(1,25);
setServo(3,25);
setServo(5,25);
setServo(7,25);
setServo(9,25);
setServo(11,25);
delay(500);
setServo(1,155);
setServo(3,155);
setServo(5,155);
setServo(7,155);
setServo(9,155);
setServo(11,155);
delay(500); //termina 4
setServo(1,25);
setServo(3,25);
setServo(5,25);
setServo(7,25);
setServo(9,25);
setServo(11,25);
delay(500);
setServo(1,155);
setServo(3,155);
setServo(5,155);
setServo(7,155);
setServo(9,155);
setServo(11,155);
delay(500); //termina 5
setServo(1,90);
setServo(3,90);
setServo(5,90);
setServo(7,90);
setServo(9,90);
setServo(11,90);
delay(2000); //termina 6 se para el robot
setServo(2,110);
setServo(4,70);
setServo(6,70);
setServo(8,110);
setServo(10,70);
setServo(12,110);
delay(700); //empieza la default dance
setServo(2,20);
setServo(4,70);
setServo(6,160);
setServo(8,110);
setServo(10,160);
setServo(12,110);
delay(400);
setServo(2,110);
setServo(4,160);
setServo(6,70);
setServo(8,20);
setServo(10,70);
setServo(12,20); //termina 1 secuencia de baile
delay(400);
setServo(2,20);
setServo(4,70);
setServo(6,160);
setServo(8,110);
setServo(10,160);
setServo(12,110);
delay(400);
setServo(2,110);
setServo(4,160);
setServo(6,70);
setServo(8,20);
setServo(10,70);
setServo(12,20);//termina 2 secuencia de baile
delay(400);
setServo(2,20);
setServo(4,70);
setServo(6,160);
setServo(8,110);
setServo(10,160);
setServo(12,110);
delay(400);
setServo(2,110);
setServo(4,160);
setServo(6,70);
setServo(8,20);
setServo(10,70);
setServo(12,20); //termina 3 secuencia de baile
delay(400);
setServo(2,20);
setServo(4,70);
setServo(6,160);
setServo(8,110);
setServo(10,160);
setServo(12,110);
delay(400);
setServo(2,110);
setServo(4,160);
setServo(6,70);
setServo(8,20);
setServo(10,70);
setServo(12,20); //termina 4 secuencia de baile
delay(400);
setServo(2,20);
setServo(4,70);
setServo(6,160);
setServo(8,110);
setServo(10,160);
setServo(12,110);
delay(400);
setServo(2,110);
setServo(4,160);
setServo(6,70);
setServo(8,20);
setServo(10,70);
setServo(12,20); //termina 5 secuencia de baile
delay(2000); // El hexapod se detiene
setServo(2,110); 
setServo(4,70);
setServo(6,70);
setServo(8,110);
setServo(10,70);
setServo(12,110);
delay(2000); //Empieza 6 secuencia de baile
setServo(2,20);
delay(100);
setServo(4,160);
delay(70);
setServo(2,110);
delay(100);
setServo(6,160);
delay(70);
setServo(4,70);
delay(100);
setServo(8,20);
delay(70);
setServo(6,70);
delay(100);
setServo(10,160);
delay(70);
setServo(8,110);
delay(100);
setServo(12,20);
delay(70);
setServo(10,70); //Termina la 6 secuencia de baile
delay(100); //Se reinicia 
setServo(2,20);
delay(70);
setServo(12,110);
delay(100);
setServo(4,160);
delay(70);
setServo(2,110);
delay(100);
setServo(6,160);
delay(70);
setServo(4,70);
delay(100);
setServo(8,20);
delay(70);
setServo(6,70);
delay(100);
setServo(10,160);
delay(70);
setServo(8,110);
delay(100);
setServo(12,20);
delay(70);
setServo(10,70);
delay(100); //termina y vuelve a empezar por segunda vez
setServo(2,20);
delay(70);
setServo(12,110);
delay(100);
setServo(4,160);
delay(70);
setServo(2,110);
delay(100);
setServo(6,160);
delay(70);
setServo(4,70);
delay(100);
setServo(8,20);
delay(70);
setServo(6,70);
delay(100);
setServo(10,160);
delay(70);
setServo(8,110);
delay(100);
setServo(12,20);
delay(70);
setServo(10,70);
delay(100); // empieza por tercera vez
setServo(2,20);
delay(70);
setServo(12,110);
delay(100);
setServo(4,160);
delay(70);
setServo(2,110);
delay(100);
setServo(6,160);
delay(70);
setServo(4,70);
delay(100);
setServo(8,20);
delay(70);
setServo(6,70);
delay(100);
setServo(10,160);
delay(70);
setServo(8,110);
delay(100);
setServo(12,20);
delay(70);
setServo(10,70);
delay(100); // por 4ta vez empieza
setServo(2,20);
delay(70);
setServo(12,110);
delay(100);
setServo(4,160);
delay(70);
setServo(2,110);
delay(100);
setServo(6,160);
delay(70);
setServo(4,70);
delay(100);
setServo(8,20);
delay(70);
setServo(6,70);
delay(100);
setServo(10,160);
delay(70);
setServo(8,110);
delay(100);
setServo(12,20);
delay(70);
setServo(10,70);
delay(100); // empieza por 5 vez
setServo(2,20);
delay(70);
setServo(12,110);
delay(100);
setServo(4,160);
delay(70);
setServo(2,110);
delay(100);
setServo(6,160);
delay(70);
setServo(4,70);
delay(100);
setServo(8,20);
delay(70);
setServo(6,70);
delay(100);
setServo(10,160);
delay(70);
setServo(8,110);
delay(100);
setServo(12,20);
delay(70);
setServo(10,70);
delay(100); //termina  por 5ta vez
setServo(12,110);
delay(2000); //Se detiene el hexapod
setServo(2,110); 
setServo(4,70);
setServo(6,70);
setServo(8,110);
setServo(10,70);
setServo(12,110);
}

void girar(){
setServo(3,110);
setServo(1,80);
setServo(11,100);
setServo(9,70);
setServo(7,120);
setServo(5,70);
delay(200);
setServo(2,100);
setServo(6,100);
setServo(10,100);
delay(200);
setServo(9,110);
setServo(11,70);
setServo(1,110);
setServo(3,70);
setServo(5,110);
setServo(7,70);
delay(200);
setServo(2,110);
setServo(6,70);
setServo(10,70);
delay(200);
setServo(4,100);
setServo(8,100);
setServo(12,100);
delay(200);
setServo(9,70);
setServo(11,110);
setServo(1,70);
setServo(3,110);
setServo(5,70);
setServo(7,110);
delay(200);
setServo(4,70);
setServo(8,110);
setServo(12,110);
delay(200);
}

void loop(){
if (BT.available()){
  Serial.write(BT.read());
} if (BT.available()){
  a = BT.read();
  if (a == 'A'){
    pararse();
  }
  if (a == 'B'){
    sentarse();
  }
  if (a == 'C'){
    girar();
  }
 // if (a == 'D'){
   // baile();
  //}
  if (a == 'E'){
    adelante();
  }
  if (a == 'F'){
    atras();
  }
}
}
