// InfraRed Sensor 

int LED = 13;
int IR = 2;
int OBSTACLE = HIGH;


void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(IR, INPUT);
Serial.begin(9600);
Serial.println("IR obstacle detector");

}

void loop() {
  // put your main code here, to run repeatedly:
OBSTACLE = digitalRead(IR);
if(OBSTACLE ==HIGH)
{
  Serial.println("OBSTACLE!");
  digitalWrite(LED, HIGH);
}else
{
  Serial.println("CLEAR!");
  digitalWrite(LED, LOW);
}
delay(200);
}
