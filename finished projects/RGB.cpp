#include <Arduino.h>

byte blueLed = 8;
byte greenLed = 7;
byte redLed = 4;
byte switch1 = 2;
byte switch2 = 12;
bool state;
bool state2;

void setup()
{
    pinMode(blueLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(redLed, OUTPUT);
}

void loop()
{
    state = digitalRead(switch1);
    state2 = digitalRead(switch2);
    if (state && state2 == true)
    {
        digitalWrite(greenLed, HIGH);
        delay(100);
        digitalWrite(greenLed, LOW);
    }
    else if (state == true)
    {
        digitalWrite(blueLed, HIGH);
        delay(100);
        digitalWrite(blueLed, LOW);
    }
    else if (state2 == true)
    {
        digitalWrite(redLed, HIGH);
        delay(100);
        digitalWrite(redLed, LOW);
    }
    else
    {
        return;
    }
}