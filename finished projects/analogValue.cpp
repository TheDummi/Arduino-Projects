#include <Arduino.h>

const byte analogPin = A0;
const byte ledPin = 11;

void setup()
{
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int fadeValue = analogRead(analogPin);

    analogWrite(ledPin, fadeValue);
    Serial.print("analoog: ");
    Serial.println(fadeValue);
}