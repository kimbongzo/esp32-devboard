const int Sensor = 25;        // Use an ADC-capable pin on ESP32-S3 (e.g., GPIO 14)
    
int level;
    
void setup() {
  Serial.begin(115200);
}
    
void loop() {
  level = analogRead(Sensor);      // Read sound level
  Serial.println(level);           // Print value for debugging
    
  delay(500);
}