#include <arduino.h>

const byte LDRPin = A0;

byte value;

void setup()
{
    pinMode(LDRPin, INPUT);

    Serial.begin(9600);
}
void loop()
{
    value = analogRead(LDRPin);
    Serial.println(value);
    delay(50);
}
