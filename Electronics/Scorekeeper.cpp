#include <LiquidCrystal.h>

// Initialize the LCD pins: (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define button pins
const int buttonUp = 7;
const int buttonDown = 8;

// Variables to store button states and score
int score = 0;
int lastButtonUpState = HIGH;
int lastButtonDownState = HIGH;

void setup() {
  lcd.begin(16, 2); // Initialize 16x2 LCD
  lcd.print("Scorekeeper");
  delay(1000);
  lcd.clear();

  pinMode(buttonUp, INPUT_PULLUP);
  pinMode(buttonDown, INPUT_PULLUP);

  lcd.setCursor(0, 0);
  lcd.print("Score: ");
  lcd.setCursor(7, 0);
  lcd.print(score);
}

void loop() {
  int currentUpState = digitalRead(buttonUp);
  int currentDownState = digitalRead(buttonDown);

  // Button Up pressed
  if (lastButtonUpState == HIGH && currentUpState == LOW) {
    score++;
    updateScore();
    delay(200); // debounce delay
  }

  // Button Down pressed
  if (lastButtonDownState == HIGH && currentDownState == LOW) {
    if (score > 0) score--; // Prevent negative score
    updateScore();
    delay(200);
  }

  lastButtonUpState = currentUpState;
  lastButtonDownState = currentDownState;
}

void updateScore() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Score: ");
  lcd.setCursor(7, 0);
  lcd.print(score);
}
