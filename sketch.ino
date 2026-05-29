#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
unsigned long lastUpdate = 0;
void setup() {
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
  Wire.begin();
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Detection");
  lcd.setCursor(0, 1);
  lcd.print("System");
}
void loop() {
  int level = analogRead(A0);
  Serial.println(level);
  if (level > 0) {
    lastUpdate = millis();
    if (level >= 650) {
      digitalWrite(5, HIGH);
      lcd.setCursor(0, 0);
      lcd.print("Drain danger! ");
      lcd.setCursor(0, 1);
      lcd.print("Risk overflow ");
    }
    else {
      digitalWrite(5, LOW);
      lcd.setCursor(0, 0);
      lcd.print("Water Level:  ");
      lcd.setCursor(0, 1);
      lcd.print(level);
      lcd.print("      ");
    }
  }
  if (millis() - lastUpdate >= 3000) {
    lcd.setCursor(0, 0);
    lcd.print("Detection     ");
    lcd.setCursor(0, 1);
    lcd.print("System        ");
  }
  delay(200);
}
