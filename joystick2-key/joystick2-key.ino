const int xPin = 39;  //the VRX attach to
const int yPin = 36;  //the VRY attach to
const int swPin = 19;  //the SW attach to

void setup() {
  pinMode(swPin, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  Serial.print("X: ");
  Serial.print(analogRead(xPin));  // print the value of VRX
  Serial.print("|Y: ");
  Serial.print(analogRead(yPin));  // print the value of VRX
  Serial.print("|Z: ");
  Serial.println(digitalRead(swPin));  // print the value of SW
  delay(500);
}
