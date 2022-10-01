byte tombol= 2;
byte led= 13;
int nilai;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(tombol, INPUT);
}

void loop(){
  nilai= digitalRead(tombol);

  if(nilai == 1){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}
