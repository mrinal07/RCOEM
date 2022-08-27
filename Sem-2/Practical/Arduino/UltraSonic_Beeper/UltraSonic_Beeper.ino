//Ultrasonic Beeper whose beeping increases as the distance from obstacle decreases


#include <NewPing.h>

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
#define Buzzer 2
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(Buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");

  if( sonar.ping_cm() == 0 )
  {
    digitalWrite(Buzzer,LOW);
  }

  else if( sonar.ping_cm() > 100 )
  {
    digitalWrite(Buzzer,LOW);
  }

  else if( sonar.ping_cm() < 50 && sonar.ping_cm() > 40 )
  {
    digitalWrite(Buzzer,HIGH);
    delay(1000);
    digitalWrite(Buzzer,LOW);
    delay(1000);
  }
  else if( sonar.ping_cm() < 40 && sonar.ping_cm() >30)
  {
    digitalWrite(Buzzer,HIGH);
    delay(500);
    digitalWrite(Buzzer,LOW);
    delay(500);
  }
  else if( sonar.ping_cm() < 30 && sonar.ping_cm() > 10)
  {
    digitalWrite(Buzzer,HIGH);
    delay(10);
    digitalWrite(Buzzer,LOW);
    delay(10);
  }
  else if( sonar.ping_cm() < 10 )
  digitalWrite(Buzzer,HIGH);
  

}
