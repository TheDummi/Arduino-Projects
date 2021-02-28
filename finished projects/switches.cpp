#include <Arduino.h>

byte redLed = 7;
byte blueLed = 8;
byte greenLed = 4;
byte yellowLed = 12;

byte switchPin = 2;
byte switchPin2 = 13;

bool state;
bool state2;

void setup()
{
    pinMode(redLed, OUTPUT);
    pinMode(blueLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    state = digitalRead(switchPin);
    state2 = digitalRead(switchPin2);
    if (state && state2 == true)
    {
        digitalWrite(redLed, HIGH);
        digitalWrite(redLed, LOW);
    }
    else if (state == true)
    {
        digitalWrite(blueLed, HIGH);
        digitalWrite(blueLed, LOW);
    }
    else if (state2 == true)
    {
        digitalWrite(greenLed, HIGH);
        digitalWrite(greenLed, LOW);
    }
    else
    {
        digitalWrite(yellowLed, HIGH);
        digitalWrite(greenLed, LOW);
        digitalWrite(redLed, LOW);
        digitalWrite(blueLed, LOW);
        digitalWrite(yellowLed, LOW);
    }
}