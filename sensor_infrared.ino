#include <Servo.h>
Servo myservo;
int angle =0;
int angleStep =50;

void setup() { 
  myservo.attach(8);
  pinMode(2,INPUT_PULLUP);
}

void loop() {
  if (digitalRead(2) == HIGH){
myservo.write(180);
  }
  else {
  myservo.write(-180);
  }
}
