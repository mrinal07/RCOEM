//Calculating the time of circuit

unsigned long myTime;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Time: ");

//  myTime = millis();
    myTime = micros();

  Serial.println(myTime);
  delay(1000);

  

}
