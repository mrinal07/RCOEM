
// Turn on/off LED by using keyboard

int key = -1;
void setup() {

  Serial.begin(9600);

  for ( int i = 2 ; i <= 6 ; i++ )
    pinMode(i, OUTPUT);

}

void loop() {

  if ( Serial.available() > 0 )
    key = Serial.read();


  switch ( key )
  {
    case 'm':
      digitalWrite(2, HIGH);
      break;

    case 'r':
      digitalWrite(3, HIGH);
      break;

    case 'i':
      digitalWrite(4, HIGH);
      break;

    case 'n':
      digitalWrite(5, HIGH);
      break;

    case 'a':
      digitalWrite(6, 10);
      break;

    case 'b':
      digitalWrite(1, HIGH);
      break;



    default:
      //    for( int i=2 ; i<=6 ; i++ )
      //      {
      //        digitalWrite(i,HIGH);
      //        delay(100);
      //      }

      //    for( int i=6 ; i>=2 ; i-- )
      //      {
      //        digitalWrite(i,LOW);
      //        delay(100);
      //      }

      break;
  }

}
