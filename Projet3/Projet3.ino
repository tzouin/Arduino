const int sensorPin=A0;
const float baselineTemp=20.0;
void setup(){
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 Serial.begin(9600); 
}

void loop(){
 int sensorVal=analogRead(sensorPin);
 Serial.print("Sensor value : ");
 Serial.print(sensorVal); 
 
 float volt=(sensorVal/1024.0)*5.0;
 Serial.print(",Volts: ");
 Serial.print(volt);

 float temperature=(volt - .5)*100;
 Serial.print(",Temperature: ");
 Serial.println(temperature);
 if (temperature > 26.00){
   digitalWrite(3, HIGH);
   digitalWrite(4,LOW);
 }else{
   digitalWrite(4,HIGH);
   digitalWrite(3,LOW);
 }
 delay(2000);
}
