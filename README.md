# Connecting-LCD-to-wemos-r2

# Interfacing a 16x4 LCD with Wemos D1 R2 (ESP8266)

## Overview
This project demonstrates how to connect a **16x4 LCD** to a **Wemos D1 R2 (ESP8266)** using the **4-bit parallel mode**. The display updates every second to show the elapsed time in seconds.

## Components Required
- Wemos D1 R2 (ESP8266)
- 16x4 LCD (HD44780-compatible)
- 10kΩ potentiometer (for contrast adjustment)
- Jumper wires
- Breadboard (optional)

## Wiring Diagram

| LCD Pin | Function  | Wemos D1 R2 (ESP8266) Pin |
|---------|----------|-------------------------|
| 1 (VSS) | GND      | GND |
| 2 (VDD) | 5V Power | 5V |
| 3 (V0)  | Contrast (via 10k Pot) | Middle pin of 10k pot |
| 4 (RS)  | Register Select | D5 (GPIO14) |
| 5 (RW)  | Read/Write | GND (Always Write Mode) |
| 6 (E)   | Enable   | D6 (GPIO12) |
| 11 (D4) | Data Bit 4 | D7 (GPIO13) |
| 12 (D5) | Data Bit 5 | D8 (GPIO15) |
| 13 (D6) | Data Bit 6 | D3 (GPIO0) |
| 14 (D7) | Data Bit 7 | D4 (GPIO2) |
| 15 (A)  | LED+ (Backlight) | 5V (or PWM for dimming) |
| 16 (K)  | LED- (Backlight GND) | GND |

## Installation
### 1. Install Required Libraries
Ensure you have the following library installed in **Arduino IDE**:
- `LiquidCrystal` (comes pre-installed with Arduino IDE)

### 2. Upload the Code
1. Open Arduino IDE.
2. Run the main.ino code in the editor:
3. Select the correct board (`Wemos D1 R2`) and upload the code.
4. The LCD should display "Wemos D1 R2 Ready!" and update time every second.

## Optimizations
- Uses **4-bit mode** to reduce pin usage.
- Updates only once per second to **minimize flicker** and improve efficiency.
- Ensures old characters are cleared properly.

## License
This project is open-source and released under the **MIT License**.

## Contact
For issues or improvements, feel free to submit a pull request or open an issue in this repository.

