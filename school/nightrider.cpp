#include <Arduino.h>

byte timer = 100;

void setup()
{
    for (byte ledPin = 2; ledPin < 8; ledPin++)
    {
        pinMode(ledPin, OUTPUT);
    }
}

void loop()
{

    for (byte ledPin = 2; ledPin < 8; ledPin++)
    {
        digitalWrite(ledPin, HIGH);
        delay(timer);
        digitalWrite(ledPin, LOW);
    }
    for (byte ledPin = 7; ledPin >= 2; ledPin--)
    {
        digitalWrite(ledPin, HIGH);
        delay(timer);
        digitalWrite(ledPin, LOW);
    }
}