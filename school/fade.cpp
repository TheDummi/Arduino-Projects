#include <Arduino.h>

byte ledPin = 9;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    for (int fadeValue = 0; fadeValue <= 255; fadeValue += 1)
    {
        analogWrite(ledPin, fadeValue);
        delay(10);
    }
    for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 1)
    {
        analogWrite(ledPin, fadeValue);
        delay(10);
    }
}