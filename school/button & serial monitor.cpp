#include <arduino.h>

const byte button = 2;
const byte ledPin = 12;

bool state = true;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(button, INPUT);

    Serial.begin(9600);
}
void loop()
{
    state = digitalRead(button);
    Serial.println(state);
    digitalWrite(ledPin, state);
    delay(20);
}
