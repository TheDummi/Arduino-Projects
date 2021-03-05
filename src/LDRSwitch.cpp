#include <Arduino.h>

const byte switchPin = 2;
const byte redLedPin = 13;
const byte LDRPin = A0;
byte value;
bool state;

void setup()
{
    pinMode(LDRPin, INPUT);
    pinMode(switchPin, INPUT);
    pinMode(redLedPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    state = digitalRead(switchPin);
    value = analogRead(LDRPin);
    Serial.println(value);
    if (state == true)
    {
        if (value >= 50)
        {
            digitalWrite(redLedPin, HIGH);
        }
        else
        {
            digitalWrite(redLedPin, LOW);
        }
    }
    else
    {
        digitalWrite(redLedPin, LOW);
    }
}