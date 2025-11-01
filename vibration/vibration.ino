#define VIBRATION 2

void setup() 
{
  Serial.begin(9600);
  pinMode(VIBRATION, INPUT);
}
 
void loop() 
{
  
  if (digitalRead(VIBRATION) == HIGH) {
    Serial.println(" => VIB");
  } 
  
  if (digitalRead(VIBRATION) == LOW) {
    Serial.println(" => No VIB!!!");
  }

  delay(500);
}
