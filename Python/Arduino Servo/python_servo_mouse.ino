#define s_pin 13
#include <Servo.h>
String serialData;
int servoX;
int servoY;
Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(s_pin);
  Serial.begin(9600);
  servo.write(0);
  Serial.setTimeout(10);
}

void loop() {

  while (!Serial.available()) {} // wait for data to arrive
  // serial read section
  while (Serial.available())
  {
    serialData = Serial.readString();
  }

  Serial.println(serialData);

  servo.write(parseServoX(serialData));
  
}


int parseServoX(String x){
  x.remove(x.indexOf("Y"));
  x.remove(x.indexOf("X"),1);
  return x.toInt();
}
int parseServoY(String y){
  y.remove(0,y.indexOf("Y") +1);

  return y.toInt();
}
