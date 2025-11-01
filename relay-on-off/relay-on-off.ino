const int relay = 15;

void setup() {
  Serial.begin(115200);
  pinMode(relay, OUTPUT);
}

void loop() {
  // Normally Open configuration, send LOW signal to let current flow
  // (if you're usong Normally Closed configuration send HIGH signal)
  digitalWrite(relay, LOW);
  Serial.println("LIGHT ON");
  delay(5000); 
  digitalWrite(relay, HIGH);
  delay(5000); 
  Serial.println("Current Flowing");
  Serial.println("LIGHT OFF");
}