#include <LiquidCrystal.h>

// Define LCD pin connections
#define RS D5
#define EN D6
#define D4 D7
#define D5 D8
#define D6 D3
#define D7 D4

// Initialize LCD (16x4)
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {
    lcd.begin(16, 4);  // Set up LCD size
    lcd.clear();       // Clear the display
    lcd.setCursor(0, 0);
    lcd.print("Wemos D1 R2 Ready!");
    lcd.setCursor(0, 1);
    lcd.print("16x4 LCD Connected");
}

void loop() {
    static uint32_t lastUpdate = 0;
    uint32_t currentMillis = millis();

    if (currentMillis - lastUpdate >= 1000) {  // Update every second
        lastUpdate = currentMillis;
        lcd.setCursor(0, 2);
        lcd.print("Time: ");
        lcd.print(currentMillis / 1000);
        lcd.print("s    ");  // Clear previous digits
    }
}
