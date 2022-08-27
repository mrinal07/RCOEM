
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT); 
  pinMode(4,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int LDR_val = analogRead(A0);
  int Switch_val = digitalRead(4);

  Serial.println(LDR_val);
  delay(10);
  Serial.println(Switch_val);
  delay(10);

  if( LDR_val > 900 )
    {
      analogWrite(3,255);
      delay(100);
      analogWrite(3,0);
      delay(100);
    }
  else
  {
    analogWrite(3,10);
    delay(100);
  }


  if( Switch_val == 0 )
  {
    digitalWrite(5,HIGH);
    delay(100);    
    digitalWrite(6,HIGH);
    delay(100);    
    digitalWrite(7,HIGH);
    delay(100);    
  }
  else
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);    
  }
    
  


    

}
