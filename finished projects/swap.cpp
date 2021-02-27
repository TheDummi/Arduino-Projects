#include <Arduino.h>

const byte switchPin = 2;
const byte blueLedPin = 7;
const byte redLedPin = 8;

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
    // Only power after 0.2 sec
    digitalWrite(blueLedPin, state);
    delay(200);
    // If the button is unpressed, return a constant red light
    if (state == false)
    {
        digitalWrite(redLedPin, HIGH);
    }
    // If the button is pressed, return a flickering blue light
    if (state == true)
    {
        digitalWrite(blueLedPin, LOW);
        delay(100);
        digitalWrite(blueLedPin, HIGH);
        delay(100);
        digitalWrite(redLedPin, LOW);
        delay(1);
        
    }
}