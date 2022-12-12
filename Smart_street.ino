
int SensorPin = 2;
int OutputPin = 13;
int SensorPin1 = 3;
int OutputPin1 = 12;
int SensorPin2 = 4;
int OutputPin2= 11;
int ledPin = 10;
const int ldrPin = A0;
void setup() {
  pinMode(OutputPin, OUTPUT);
  pinMode(SensorPin, INPUT);
   pinMode(OutputPin1, OUTPUT);
  pinMode(SensorPin1, INPUT);
  Serial.begin(9600);
}

void loop() {
  int SensorValue = digitalRead(SensorPin);
 
  Serial.print("SensorPin Value: ");
  Serial.println(SensorValue);
 // delay(1000);
   if (SensorValue==LOW){ // LOW MEANS Object Detected
    digitalWrite(OutputPin, HIGH);
  }
  else
  {
    digitalWrite(OutputPin, LOW);
  }

  int SensorValue1 = digitalRead(SensorPin1);
 
  Serial.print("SensorPin Value: ");
  Serial.println(SensorValue1);
 // delay(1000);
   if (SensorValue1==LOW){ // LOW MEANS Object Detected
    digitalWrite(OutputPin1, HIGH);
  }
  else
  {
    digitalWrite(OutputPin1, LOW);
  }

int SensorValue2 = digitalRead(SensorPin2);
 
  Serial.print("SensorPin Value: ");
  Serial.println(SensorValue2);
 // delay(1000);
   if (SensorValue2==LOW){ // LOW MEANS Object Detected
    digitalWrite(OutputPin2, HIGH);
  }
  else
  {
    digitalWrite(OutputPin2, LOW);
  }



int ldr = analogRead(ldrPin);

if (ldr <= 1900) {



digitalWrite(ledPin, HIGH);

Serial.print("Its Night Time, Turn on the LED : ");

Serial.println(ldr);

} else {

digitalWrite(ledPin, LOW);

Serial.print("Its daytime, Turn off the LED : ");

Serial.println(ldr);

}


 
}
