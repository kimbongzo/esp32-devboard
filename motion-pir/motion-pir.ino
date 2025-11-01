#define MOTION 26

void setup() 
{
  Serial.begin(9600);
  pinMode(MOTION, INPUT);
}
 
void loop() 
{
  
  if (digitalRead(MOTION) == HIGH) {
    Serial.println(" => Human Motion Detetct!!");
  } 
  
  if (digitalRead(MOTION) == LOW) {
    Serial.println(" => No Detect!");
  }

  delay(500);
}
