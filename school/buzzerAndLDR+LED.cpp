#include <arduino.h>

const byte LDRPin = A0;
const byte LEDPin = 12;
const byte buzzer = 13;
byte value;
byte sound;

void exit()
{
    noTone(buzzer);
    digitalWrite(LEDPin, LOW);
}

void logging()
{
    Serial.print("sound value: ");
    Serial.print(sound);
    Serial.print(" light value: ");
    Serial.println(value);
}
void alarm()
{
    digitalWrite(LEDPin, HIGH);
    delay(100);
    digitalWrite(LEDPin, LOW);
}

void setup()
{
    pinMode(LDRPin, INPUT);
    pinMode(LEDPin, OUTPUT);
    pinMode(buzzer, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    value = analogRead(LDRPin);
    if (value <= 100)
    {
        for (sound = 0; sound <= 255; sound++)
        {
            if (value >= 100)
            {
                exit();
            }
            else
            {
                if (sound == 255)
                {
                    sound = 255;
                }
                tone(buzzer, sound);
            }
            logging();
            alarm();
        }
    }
    else
    {
        exit();
        logging();
        delay(100);
    }
}
