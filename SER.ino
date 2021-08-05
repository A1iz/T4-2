#include <Servo.h>
Servo S;
Servo A;
Servo Z;
Servo X;
Servo C;
Servo Q;

void setup() {
  Serial.begin(9600);
S.attach(3);
A.attach(5);
Z.attach(6);
X.attach(9);  
C.attach(10);
Q.attach(11);
  
}

void loop() {
  
 
  
  S.write(20);
  Z.write(20);
  A.write(20);
  delay(2000);
  S.write(90);
  A.write(90);
  Z.write(90);
  delay(1000);
  S.write(50);
  A.write(50);
  Z.write(50);
  delay(1000);
  S.write(90);
  A.write(90);
  Z.write(90);
  

  
  X.write(20);
  C.write(20);
  Q.write(20);
  delay(2000);
  X.write(90);
  C.write(90);
  Q.write(90);
  delay(1000);
  X.write(50);
  C.write(50);
  Q.write(50);
  delay(1000);
  X.write(90);
  C.write(90);
  Q.write(90);

 


}
