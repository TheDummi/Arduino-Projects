#include <Arduino.h>
byte RedLedPin = 8;

void setup()
{
  pinMode(RedLedPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(RedLedPin, HIGH);
  delay(1000);
  digitalWrite(RedLedPin, LOW);
  delay(1000);
  Serial.println("Looped");
}