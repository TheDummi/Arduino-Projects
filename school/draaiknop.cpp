#include <Arduino.h>

const byte analogPin = A0;
const byte ledPin = 13;
const int threshold = 400;

void setup()
{
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int analogValue = analogRead(analogPin);

    if (analogValue > threshold)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }
    Serial.println(analogValue);
    delay(1);
}