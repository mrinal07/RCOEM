// Switch with LED

int switchVal;
void setup() {
  pinMode(4,OUTPUT);
  pinMode(8,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchVal = digitalRead(8);

  if( switchVal == 0 )
  {
    digitalWrite(4,HIGH);
    
  }
  else
  {
    digitalWrite(4,LOW);
  }
  

}
