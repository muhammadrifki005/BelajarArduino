const int buzzer = 9; //buzzer to arduino pin 9


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){
 
  tone(buzzer, 1046); 
  delay(250);
  tone(buzzer, 1244); 
  delay(250); 
  tone(buzzer, 1400); 
  delay(250); 
  tone(buzzer, 1510); 
  delay(250);
  tone(buzzer, 1400); 
  delay(250);
  tone(buzzer, 1244); 
  delay(250); 
  tone(buzzer, 1046); 
  delay(250); 
  noTone(buzzer); 
  delay(500); 
  tone(buzzer, 932); 
  delay(125);
  tone(buzzer, 1174); 
  delay(125); 
  tone(buzzer, 1046); 
  delay(250);
  // end of first
  noTone(buzzer); 
  delay(500); 
  tone(buzzer, 780); 
  delay(250); 
  tone(buzzer, 525); 
  delay(250); 
  noTone(buzzer); 
  delay(250);
  //secont part
  tone(buzzer, 1046); 
  delay(250);
  tone(buzzer, 1244); 
  delay(250); 
  tone(buzzer, 1400); 
  delay(250); 
  tone(buzzer, 1510); 
  delay(250);
  tone(buzzer, 1400); 
  delay(250);
  tone(buzzer, 1244); 
  delay(250);
  tone(buzzer, 1400); 
  delay(250);
  noTone(buzzer); 
  delay(750);
  //fast part
  tone(buzzer, 1510); 
  delay(125);
  tone(buzzer, 1400); 
  delay(125);
  tone(buzzer, 1244); 
  delay(125);
  tone(buzzer, 1510); 
  delay(125);
  tone(buzzer, 1400); 
  delay(125);
  tone(buzzer, 1244); 
  delay(125);
  tone(buzzer, 1510); 
  delay(125);
  tone(buzzer, 1400); 
  delay(125);
  tone(buzzer, 1244); 
  delay(125);
  tone(buzzer, 1510); 
  delay(125);
  tone(buzzer, 1400); 
  delay(125);
  tone(buzzer, 1244); 
  delay(125);
   tone(buzzer, 1510); 
  delay(125);
  noTone(buzzer); 
  delay(500);
  
}
