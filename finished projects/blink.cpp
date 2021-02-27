#include <Arduino.h>

byte redLedPin = 8;
byte blueLedPin = 7;
byte greenLedPin = 2;
byte yellowLedPin = 4;

void setup()
{
  pinMode(redLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // Red led on
  digitalWrite(redLedPin, HIGH);
  delay(1000);
  Serial.println("RED ON");
  // Red led off
  digitalWrite(redLedPin, LOW);
  delay(1000);
  Serial.println("RED OFF");
  // Blue pin on
  digitalWrite(blueLedPin, HIGH);
  delay(1000);
  Serial.println("BLUE ON");
  // Blue led off
  digitalWrite(blueLedPin, LOW);
  delay(1000);
  Serial.println("BLUE OFF");
  // Green led on
  digitalWrite(greenLedPin, HIGH);
  delay(1000);
  Serial.println("GREEN ON");
  // Green led off
  digitalWrite(greenLedPin, LOW);
  delay(1000);
  Serial.println("GREEN OFF");
  // Yellow led off
  digitalWrite(yellowLedPin, HIGH);
  delay(1000);
  Serial.println("YELLOW ON");
  // Yellow led off
  digitalWrite(yellowLedPin, LOW);
  delay(1000);
  Serial.println("YELLOW OFF");
}