int buzzerPin = 12;
void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  tone (buzzerPin, 261);
  delay (1000);
  tone (buzzerPin, 277);
  delay (1000);
  tone (buzzerPin, 294);
  delay (1000);
  tone (buzzerPin, 311);
  delay (1000);
}
