/*
  Accelerometer 
*/
const int X = A0;
const int Y = A1;
const int Z = A2;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  Serial.println("Accelerometer");
}

// the loop routine runs over and over again forever:
void loop() {
  
  Serial.print(analogRead(X));
  Serial.print("\t");
  Serial.print(analogRead(Y));
  Serial.print("\t");
  Serial.println(analogRead(Z));
  delay(100);        
}
