#include <Servo.h>
Servo servoMotor1;
Servo servoMotor2;
Servo servoMotor3;
Servo servoMotor4;
int potPin1 = A0;
int servoPin1 = 2;
int potPin2 = A1;
int servoPin2 = 3;
int potPin3 = A2;
int servoPin3 = 4;
int potPin4 = A3;
int servoPin4 = 5;
void setup() {
Serial.begin(9600);
servoMotor1.attach(servoPin1);
servoMotor2.attach(servoPin2);
servoMotor3.attach(servoPin3);
servoMotor4.attach(servoPin4);
}
void loop() {
int potValor1 = analogRead(potPin1);
int servo1 = map(potValor1, 0, 1023, 0, 180);
int potValor2 = analogRead(potPin2);
int servo2 = map(potValor2, 0, 1023, 0, 180);
int potValor3 = analogRead(potPin3);
int servo3 = map(potValor3, 0, 1023, 0, 180);
int potValor4 = analogRead(potPin4);
int servo4 = map(potValor4, 0, 1023, 0, 180);
servoMotor1.write(servo1);
servoMotor2.write(servo2);
servoMotor3.write(servo3);
servoMotor4.write(servo4);
Serial.print("Potenciometro_1 Input: ");
Serial.print(potValor1);
Serial.print(" \t ");
Serial.print("Potenciometro_1 Output: ");
Serial.println(servo1);
Serial.print("Potenciometro_2 Input: ");
Serial.print(potValor2);
Serial.print(" \t ");
Serial.print("Potenciometro_2 Output: ");
Serial.println(servo2);
Serial.print("Potenciometro_3 Input: ");
Serial.print(potValor3);
Serial.print(" \t ");
Serial.print("Potenciometro_3 Output: ");
Serial.println(servo3);
Serial.print("Potenciometro_4 Input: ");
Serial.print(potValor4);
Serial.print(" \t ");
Serial.print("Potenciometro_4 Output: ");
Serial.println(servo4);
delay(50);
}