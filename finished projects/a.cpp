#include <Arduino.h>

byte blueLed = 13;
byte greenLed = 12;
byte redLed = 8;
byte switch1 = 7;
byte switch2 = 2;
bool state;
bool state2;

void setup()
{
    pinMode(switch1, INPUT);
    pinMode(switch2, INPUT);
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
        digitalWrite(blueLed, HIGH);
        digitalWrite(redLed, LOW);
        digitalWrite(greenLed, LOW);
        delay(100);
        digitalWrite(blueLed, LOW);
    }
    else if (state == true)
    {
        digitalWrite(redLed, HIGH);
        digitalWrite(blueLed, LOW);
        digitalWrite(greenLed, LOW);
        delay(100);
        digitalWrite(redLed, LOW);
    }
    else if (state2 == true)
    {
        digitalWrite(greenLed, HIGH);
        digitalWrite(redLed, LOW);
        digitalWrite(blueLed, LOW);
        delay(100);
        digitalWrite(greenLed, LOW);
    }
    else
    {
        digitalWrite(redLed, LOW);
        digitalWrite(blueLed, LOW);
        digitalWrite(greenLed, LOW);
    }
}