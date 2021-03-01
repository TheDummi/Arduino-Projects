#include <Arduino.h>

byte blueLed = 12;
byte greenLed = 8;
byte redLed = 13;
byte switch1 = 2;
byte switch2 = 7;
bool state;
bool state2;

void setup()
{
    pinMode(blueLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(redLed, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    state = digitalRead(switch1);
    state2 = digitalRead(switch2);
    if (state && state2 == true)
    {
        digitalWrite(blueLed, HIGH);
        delay(100);
        digitalWrite(blueLed, LOW);
        digitalWrite(greenLed, HIGH);
        delay(100);
        digitalWrite(greenLed, LOW);
        digitalWrite(redLed, HIGH);
        delay(100);
        digitalWrite(redLed, LOW);
        delay(100);
        Serial.println("state: " + state);
        Serial.println("state 2: " + state2);
    }
    else if (state == true)
    {
        digitalWrite(blueLed, HIGH);
        delay(100);
        digitalWrite(blueLed, LOW);
        digitalWrite(greenLed, LOW);
        digitalWrite(redLed, LOW);
        delay(100);
        Serial.println("state: " + state);
        Serial.println("state 2: " + state2);
    }
    else if (state2 == true)
    {
        digitalWrite(blueLed, LOW);
        digitalWrite(greenLed, LOW);
        digitalWrite(redLed, HIGH);
        delay(100);
        digitalWrite(redLed, LOW);
        delay(100);
        Serial.println("state: " + state);
        Serial.println("state 2: " + state2);
    }
    else
    {
        digitalWrite(blueLed, LOW);
        digitalWrite(redLed, LOW);
        digitalWrite(greenLed, LOW);
        delay(100);
        Serial.println("state: " + state);
        Serial.println("state 2: " + state2);
    }
}