#define s_pin 13
#include <Servo.h>
int serialData;
int angle;
Servo servo;
int i;
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
    serialData = Serial.parseInt();
  }

  if(serialData <= 180){
//    angle = serialData.toInt();
//    servo.write(angle);
    servo.write(serialData);
  }
  else if(serialData > 180){
    survey();
  }
}
void survey(){
  for(i=0; i <= 180; i+=10){
    servo.write(i);
    delay(100);
  }

  for(i=180; i >=0; i-=10){
    servo.write(i);
    delay(100);
  }
}
