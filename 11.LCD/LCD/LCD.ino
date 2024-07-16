// Include the LiquidCrystal library
#include <LiquidCrystal.h>

// Define LCD pin connections
const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;

// Create an instance of the LiquidCrystal object
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Initialize the LCD with 16 columns and 2 rows
  lcd.begin(16, 2);
  // Print a welcome message to the LCD
  lcd.print("Hello, World!");
  // Wait for 2 seconds
  delay(2000);
}

void loop() {
  // Clear the LCD
  lcd.clear();
  // Set cursor to the first column, first row
  lcd.setCursor(0, 0);
  // Print the first line of the message
  lcd.print("IoT Projects");
  // Set cursor to the first column, second row
  lcd.setCursor(0, 1);
  // Print the second line of the message
  lcd.print("Welcome!");
  // Wait for 2 seconds
  delay(2000);
  // Clear the LCD
  lcd.clear();
  // Set cursor to the first column, first row
  lcd.setCursor(0, 0);
  // Print another message
  lcd.print("MSME Internship");
  // Set cursor to the first column, second row
  lcd.setCursor(0, 1);
  // Print another line of the message
  lcd.print("IoT Fundamentals");
  // Wait for 2 seconds
  delay(2000);
}
