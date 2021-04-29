#include <Arduino.h>

const byte ledPin = 4;
const byte LDRPin = A0;
byte value;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(LDRPin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    value = analogRead(LDRPin);
    if (value <= 100)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }
    Serial.print("LDR value: ");
    Serial.println(value);
    delay(100);
}
