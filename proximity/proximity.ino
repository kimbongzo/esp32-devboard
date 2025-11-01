#define PROXOMITY 23

void setup() 
{
  Serial.begin(9600);
  pinMode(PROXOMITY, INPUT);
}
 
void loop() 
{
  
  if (digitalRead(PROXOMITY) == HIGH) {
    Serial.println(" => Long");
  } 
  
  if (digitalRead(PROXOMITY) == LOW) {
    Serial.println(" => Collision!!!");
  }

  delay(500);
}
