#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int tiltPin = 7;  // Pin connected to the tilt switch
int tiltState;          // Variable to store the state of the tilt switch
int textPosition = 0;   // Variable to track the horizontal position of the text
bool falling = false;   // Flag to indicate if the text is falling

void setup() {
  lcd.begin(16, 2);  // Initialize the LCD with 16 columns and 2 rows
  pinMode(tiltPin, INPUT_PULLUP);  // Set the tilt pin as input with an internal pull-up resistor
  lcd.print("Ready to slide!");  // Print the initial message
}

void loop() {
  tiltState = digitalRead(tiltPin);  // Read the state of the tilt switch

  if (tiltState == LOW) {  // If the tilt switch is triggered
    falling = true;  // Start the falling animation
  } else {
    falling = false;  // Stop the falling animation and start the return animation
  }

  if (falling) {
    lcd.clear();  // Clear the screen
    lcd.setCursor(textPosition, 1);  // Set the cursor based on the current text position
    lcd.print("Sliding...");  // Display the 'sliding' text

    textPosition++;  // Move the text to the right
    if (textPosition > 15) {  // If the text reaches the end, loop it back to the start
      textPosition = 0;
    }

    delay(300);  // Delay to control the speed of the animation
  } else {
    if (textPosition > 0) {  // If the text is not at the starting position
      textPosition--;  // Move the text back to the left
      lcd.clear();
      lcd.setCursor(textPosition, 1);  // Set the cursor to the new position
      lcd.print("Sliding back...");  // Display the 'sliding back' text as it returns
      delay(300);  // Delay to control the speed of the return animation
    } else {
      lcd.clear();
      lcd.setCursor(0, 1);  // Set the cursor to the original position
      lcd.print("Ready to slide!");  // Display the original message
      delay(500);  // Small delay to debounce the tilt switch
    }
  }
}
