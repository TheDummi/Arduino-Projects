#include <arduino.h>


const byte buttonPin = 2;
const byte ledPin01 = 12;
const byte ledPin02 = 11;
const byte ldrPin = A0;

float voltage = 3.5;
byte pwmVal;
byte value;
bool state;
long maximum = 250000;

void setup()
{
    // Aanduiden van in- en uitgangen
    pinMode(buttonPin, INPUT);
    pinMode(ledPin01, OUTPUT);
    pinMode(ledPin02, OUTPUT);
    pinMode(ldrPin, INPUT);

    Serial.begin(9600); // Starten van seriële communicatie
}

void loop()
{
    state = digitalRead(buttonPin);
    digitalWrite(ledPin01, state);

    value = analogRead(ldrPin);
    Serial.println(value);

    pwmVal = (voltage / 5) * 255;
    analogWrite(ledPin02, pwmVal);
    Serial.println(pwmVal);

    delay(30);
}
