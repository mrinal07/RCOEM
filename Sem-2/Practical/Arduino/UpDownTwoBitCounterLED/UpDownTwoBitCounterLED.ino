// 2 bit counter using up down switches
int n=-1;
int SWITCH1 = 5;
int SWITCH2 = 4;

int LED1 = 3;
int LED2 = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(SWITCH1,INPUT_PULLUP);
  pinMode(SWITCH2,INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int S1Input = digitalRead(SWITCH1);
  int S2Input = digitalRead(SWITCH2);
  Serial.println( "SWITCH1" );
  Serial.println( S1Input );
  Serial.println( "SWITCH2" );
  Serial.println( S2Input );

  if( S1Input == 0 )n++;
  else if( S2Input == 0 )n--;

  switch( n )
      {
        case 0:
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        break;
        case 1:
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,HIGH);
        break;
        case 2:
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,LOW);
        break;
        case 3:
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        break;
        default:
        n= 0;
        break;
        
      }    
      delay(100);

}
