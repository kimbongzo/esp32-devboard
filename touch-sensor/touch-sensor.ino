// set pin numbers
const int touchPin1 = 32; 
const int touchPin2 = 33; 

// change with your threshold value
const int threshold = 20;
// variable for storing the touch pin value 
int touchValue1;
int touchValue2;


void setup(){
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  // initialize the LED pin as an output:
}

void loop(){
  // read the state of the pushbutton value:
  touchValue1 = touchRead(touchPin1);
  touchValue2 = touchRead(touchPin2);
  Serial.println(touchValue1);
  Serial.println(touchValue2);
  // check if the touchValue is below the threshold
  // if it is, set ledPin to HIGH
  if(touchValue1 < threshold){
    // turn LED on
    Serial.println("Touch 32");
  }
  if(touchValue2 < threshold){
    // turn LED on
    Serial.println("Touch 33");
  }
  
  delay(500);
}