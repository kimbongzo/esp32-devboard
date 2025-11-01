#define sounddigital 33 // ESP32 pin GPIO18 connected to the OUT pin of the sound sensor

int lastState = HIGH;  // the previous state from the input pin
int currentState;      // the current reading from the input pin

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(115200);
  // initialize the ESP32's pin as an input
  pinMode(sounddigital, INPUT);
}

void loop() {
  // read the state of the the ESP32's input pin
  currentState = digitalRead(sounddigital);

  if (currentState == HIGH)
    Serial.println("sound detected");
  if (currentState == LOW)
    Serial.println("The sound not detect");

  delay(500);

}
