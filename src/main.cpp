#include <Arduino.h>

int BuzzerPin = 3; // Пьезодинамик установлен на 3 пин

void setup()
{
  pinMode(BuzzerPin, OUTPUT); // Установка пина на выход
}

void loop()
{
  digitalWrite(BuzzerPin, HIGH); // Установка пина на HIGH (Пьезодинамик не работает)
  delay(10000);                  // Пьезодинамик не работает 10000 мс
  digitalWrite(BuzzerPin, LOW);  // Установка пина на LOW (Пьезодинамик работает)
  delay(100);                    // Пьезодимамик работает 100 мс
}
