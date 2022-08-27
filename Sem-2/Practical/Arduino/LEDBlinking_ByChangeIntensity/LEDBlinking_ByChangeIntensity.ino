// Change LED blinking with respect to intensity

const int LED = 8;
const int LDR = A0;
int interval = 500;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval);                       // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(interval); 
  
  int sensorValue = analogRead(LDR);
  interval = map(sensorValue,0,1000,0,1000);  
  Serial.println(sensorValue);
  
                        
}
