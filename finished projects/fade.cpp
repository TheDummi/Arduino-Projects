#include <Arduino.h>

byte redLed = 8;
byte blueLed = 7;
int fade = 0;
int fadeAmount = 5;

void setup()
{
    pinMode(redLed, OUTPUT);
}

void loop()
{
    analogWrite(redLed, fade);
    analogWrite(blueLed, fade);

    // Change the fade by adding fadeAmount
    fade = fade + fadeAmount;

    // If fade is smaller or equal to 0 or bigger or equal to 255, negative fadeAmountb
    if (fade <= 0 || fade >= 255)
    {
        fadeAmount = -fadeAmount;
    }
    delay(10);
}