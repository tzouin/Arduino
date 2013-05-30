const int greenLedPin=9;
const int redLedPin=11;
const int blueLedPin=10;

const int redSensorPin=A0;
const int greenSensorPin=A1;
const int blueSensorPin=A2;

int redValue=0;
int greenValue=0;
int blueValue=0;

int redSensorValue=0;
int greenSensorValue =0;
int blueSensorValue=0;

void setup(){
 Serial.begin(9600);
 pinMode(greenLedPin, OUTPUT);
 pinMode(redLedPin, OUTPUT);
 pinMode(blueLedPin, OUTPUT);
}

void loop(){
 redSensorValue=analogRead(redSensorPin);
 delay(5);
 greenSensorValue=analogRead(greenSensorPin);
 delay(5);
 blueSensorValue=analogRead(blueSensorPin);
 Serial.print("Valeurs capteurs : \t Red:");
 Serial.print(redSensorValue);
 Serial.print("\t green:");
 Serial.print(greenSensorValue);
 Serial.print("\t blue:");
 Serial.println(blueSensorValue);
 
 redValue=redSensorValue/4;
 greenValue=greenSensorValue/4;
 blueValue=blueSensorValue/4;
 
 Serial.print("Red : ");
 Serial.print(redValue);
 Serial.print("\t Green : ");
 Serial.print(greenValue);
 Serial.print("\t Blue: ");
 Serial.println(blueValue);
 
 analogWrite(redLedPin,redValue);
 analogWrite(blueLedPin,blueValue);
 analogWrite(greenLedPin,greenValue);
 delay(1000);
}
