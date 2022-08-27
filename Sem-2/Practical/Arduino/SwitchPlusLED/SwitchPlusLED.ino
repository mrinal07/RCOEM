// Switch + LED
int pushButton = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);

  for( int i=3 ; i<=6 ; i++ )
  pinMode(i,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(pushButton);

  Serial.println(buttonState);
  delay(100);

  if( buttonState == 0 )
  {
    for( int i=3 ; i<=6 ; i++ )
    {
     
        digitalWrite(i,HIGH);
        delay(100);
        digitalWrite(i,LOW);
        delay(100);
    }
  }
  else
  {
    for( int i=6 ; i>=3 ; i-- )
    {
     
        digitalWrite(i,HIGH);
        delay(100);
        digitalWrite(i,LOW);
        delay(100);
    }
    
  }
}
