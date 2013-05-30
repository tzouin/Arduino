float time=2000;

void setup(){
}

void loop(){
  /*Lets make a BOMB */
  tone(8,600,20);
  delay(time);
  time=time-100;
}
