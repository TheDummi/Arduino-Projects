#include <Arduino.h>

const byte switchPin = 2;
const byte blueLedPin = 7;

bool state;

void setup()
{
    pinMode(switchPin, INPUT);
    pinMode(blueLedPin, OUTPUT);
}

void loop()
{
    // Read state of the switch
    state = digitalRead(switchPin);
    // Only power after 0.02 sec
    digitalWrite(blueLedPin, state);
    delay(20);
    // If the button is pressed, return a blue flickering light
    if (state == true)
    {
        digitalWrite(blueLedPin, HIGH);
        delay(1000);
        digitalWrite(blueLedPin, LOW);
        delay(1000);
    }
    // In all other cases, return nothing
    else
        return;
}