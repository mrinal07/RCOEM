// Selection Sort

// the setup function runs once when you press reset or power the board
int arr[] = {3,1,2}; 
int i=0, j=0, min_idx=0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
//  int ledPins[] = {
//  2, 5, 7, 9, 11
//}; 
//  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);                       // wait for a second
//  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);                       // wait for a second

    
    int n=3;    
    int a=arr[0],b=arr[1],c=arr[2];
    Serial.print(a);
    Serial.print(b);
    Serial.print(c);
    Serial.println("--");
    
    
    int led1[] = {2,3,4};
    int led2[] = {5,6,7};
    int led3[] = {8,9,10};

    for( int i=0 ; i<a ; i++ )
      digitalWrite(led1[i],HIGH);
      
    for( int i=0; i<b ; i++ )
      digitalWrite(led2[i],HIGH);

    for( int i=0 ; i<c ; i++ )
      digitalWrite(led3[i],HIGH);

      
    delay(3000);

    if( i>=n-1 )
    {
      while(true)
      {
        for( int i=0 ; i<a ; i++ )
      digitalWrite(led1[i],HIGH);
      
      for( int i=0; i<b ; i++ )
      digitalWrite(led2[i],HIGH);

      for( int i=0 ; i<c ; i++ )
      digitalWrite(led3[i],HIGH);
      }
      
    }
    

     
 
    if (i < n-1) 
    {        
       
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

        i++;
  
    } 

//    for( int i=0 ; i<n ; i++ )
//      Serial.print(arr[i]);

    for( int i=0 ; i<a ; i++ )
      digitalWrite(led1[i],LOW);
      
    for( int i=0; i<b ; i++ )
      digitalWrite(led2[i],LOW);

    for( int i=0 ; i<c ; i++ )
      digitalWrite(led3[i],LOW);
    
    delay(1000);
    
}
