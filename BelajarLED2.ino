  int LED1 = 13
void setup() {
  // put your setup code here, to run once:

     pinMode(LED1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


    digitalWrite(LED1, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
  delay(100);

}
