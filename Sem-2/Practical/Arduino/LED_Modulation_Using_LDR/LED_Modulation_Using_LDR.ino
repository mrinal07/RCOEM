/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/
int i=10;// Pin: PWM no.10

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
   
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability


  if( sensorValue <200 )
  {
    analogWrite(i,0);
    delay(100);    
  }
  if( sensorValue <400 && sensorValue >200 )
  {
    analogWrite(i,10);
    delay(100);    
  }
  if( sensorValue <600 && sensorValue >400 )
  {
    analogWrite(i,50);
    delay(100);    
  }
  if( sensorValue <800 && sensorValue >600 )
  {
    analogWrite(i,150);
    delay(100);    
  }
  if( sensorValue <1024 && sensorValue >800 )
  {
    analogWrite(i,255);
    delay(100);    
  }
}
