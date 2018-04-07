
int airquality= 0;
int LED1=13;
int LED2=12;
int LED3=11;
void setup() {
Serial.begin(9600);
pinMode (LED1,OUTPUT);
pinMode (LED2,OUTPUT);
pinMode (LED3,OUTPUT);
}

void loop() {

int sensorValue = analogRead(A0);
Serial.print("CO2 Level = ");
Serial.print(sensorValue);

Serial.print("PPM");
Serial.println();
delay(1000);
if (sensorValue <= 50){
  digitalWrite(LED1,HIGH);
  delay(100);
  digitalWrite(LED1,LOW);
}
else if (sensorValue > 51 && sensorValue < 90){
  digitalWrite(LED2,HIGH);
  delay(100);
  digitalWrite(LED2,LOW);
}
else if (sensorValue >= 90){
  digitalWrite(LED3,HIGH);
  delay(100);
  digitalWrite(LED3,LOW);
}
}
//Goal is turn on lights for different air levels (blowing on the sensor)
//red yellow green lights for different levels 
//this code has bugs
