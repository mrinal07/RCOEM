/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
//Pulse Width Modulation LED
int i=10;  // Pin: PWM no.10

void setup() {
pinMode(i,OUTPUT);
}

void loop() {
analogWrite(i,255);
delay(1000);
analogWrite(i,150);
delay(1000);
analogWrite(i,50);
delay(1000);
analogWrite(i,10);
delay(1000);
analogWrite(i,0);
delay(1000);
}
