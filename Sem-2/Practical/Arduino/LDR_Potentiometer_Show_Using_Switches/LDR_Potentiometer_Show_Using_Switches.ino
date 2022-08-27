// Show values of LDR & Potentiometer using two switches
int switch1 = 3;
int switch2 = 2;
int LDR = A1;
int Poten = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(switch1,INPUT_PULLUP);
  pinMode(switch2,INPUT_PULLUP);
  pinMode(LDR,INPUT);
  pinMode(Poten,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr = analogRead(LDR);
  int poten = analogRead(Poten);
  int s1 = digitalRead(switch1);
  int s2 = digitalRead(switch2);

  if( s1 == 0 )
  {
    Serial.println("LDR: ");
    Serial.print(ldr);
    Serial.println();
  }
  if( s2 == 0 )
  {
    Serial.println("Potentiometer: ");
    Serial.print(poten);
    Serial.println();
  }
  delay(100);

}
