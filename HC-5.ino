#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

String msg = "";

void setup() {
  Serial.begin(9600);   // Bluetooth communication
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Bluetooth Ready");
  delay(2000);
  lcd.clear();
}

void loop() {
  while (Serial.available()) {
    char c = Serial.read();
    msg += c;
    delay(10);
  }

  if (msg.length() > 0) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Message:");
    lcd.setCursor(0,1);
    lcd.print(msg);

    msg = ""; // reset buffer
  }
}