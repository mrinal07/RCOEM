//Desing a 4 bit binary counter using arduino
int n = 1;
int SWITCH =2;
int LED1 = 6;
int LED2 = 5;
int LED3 = 4;
int LED4 = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(SWITCH,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  

  Serial.println(digitalRead(SWITCH));
  

  if( digitalRead(SWITCH) == 0 )
  {
    switch( n )
    {
      case 1:
      digitalWrite(LED4,HIGH);
//      delay(2000);
      break;
      case 2:
      digitalWrite(LED3,HIGH);
//      delay(2000);
      break;
      case 3:
      digitalWrite(LED4,HIGH);
      digitalWrite(LED3,HIGH);
//      delay(2000);
      break;
      case 4:
      digitalWrite(LED2,HIGH);
//      delay(2000);
      break;
      default:
//      digitalWrite(LED1,LOW);
//      digitalWrite(LED2,LOW);
//      digitalWrite(LED3,LOW);
//      digitalWrite(LED4,LOW);
      break;
      
    }
    n++;
    delay(100);
  }
  

  

}
