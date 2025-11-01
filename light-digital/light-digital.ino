#define LIGHTSENSOR 35

void setup() 
{
  Serial.begin(9600);
  pinMode(LIGHTSENSOR, INPUT);
}
 
void loop() 
{
  
  if (digitalRead(LIGHTSENSOR) == HIGH) {
    Serial.println(" => Dark");
  } 
  
  if (digitalRead(LIGHTSENSOR) == LOW) {
    Serial.println(" => LIGHT");
  }

  delay(500);
}
