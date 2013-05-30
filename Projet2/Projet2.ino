int switchState=0;
boolean fiesta=false;
void setup(){
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
}

void loop(){
  switchState=digitalRead(2);
  if(switchState==1){
    fiesta=!fiesta;
  }
  if (fiesta==true){
    for(int i=3;i<6;i++){
       digitalWrite(i,HIGH); 
       delay(500);
       digitalWrite(i,LOW);
    }
  }
}
