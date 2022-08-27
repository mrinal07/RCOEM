void setup() {
  // put your setup code here, to run once:
  for( int i=2 ; i<=6 ; i++ )
  pinMode(i,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:    
//2 5 7 9 11

//  Program 1
//    for( int i=2 ; i<=4 ; i++ )
//    {
//      if( i==4 )
//      {
//        digitalWrite(i,HIGH);
//        delay(500);
//        digitalWrite(i,LOW);
//        delay(500);
//        continue;
//      }
//            digitalWrite(i,HIGH);
//            digitalWrite(i+2,HIGH);
//            digitalWrite(i+4,HIGH);            
//            delay(500);
//            digitalWrite(i,LOW);
//            digitalWrite(i+2,LOW);
//            digitalWrite(i+4,LOW);
//    }

        int x=100;

       for( int i=2 ; i<=6 ; i++ )
       {
        digitalWrite(i,HIGH);
        delay(x);        

        digitalWrite(i,LOW);
        delay(x);  
       }  
       digitalWrite(6,HIGH);

       for( int i=2 ; i<=5 ; i++ )
       {
        digitalWrite(i,HIGH);
        delay(x);        

        digitalWrite(i,LOW);
        delay(x);  
       }  
       digitalWrite(5,HIGH);

       for( int i=2 ; i<=4 ; i++ )
       {
        digitalWrite(i,HIGH);
        delay(x);        

        digitalWrite(i,LOW);
        delay(x);  
       }  
       digitalWrite(4,HIGH);

       for( int i=2 ; i<=3 ; i++ )
       {
        digitalWrite(i,HIGH);
        delay(x);        

        digitalWrite(i,LOW);
        delay(x);  
       }  
       digitalWrite(3,HIGH);

       
       digitalWrite(2,HIGH);
       delay(1000);

       
       
}
