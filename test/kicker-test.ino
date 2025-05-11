/*
 * Kicker Test – Test kicker output pin (for servo or solenoid)
 * For solenoid: just pulses HIGH
 * For servo: add Servo.h and sweep
 */

#include "../firmware/config.h"

// Uncomment for servo-based kicker
//#include <Servo.h>
//Servo kicker;

void setup() {
  pinMode(KICKER_PIN, OUTPUT);
  // kicker.attach(KICKER_PIN);  // For servo use
}

void loop() {
  // Solenoid Mode: pulse kicker
  digitalWrite(KICKER_PIN, HIGH);
  delay(300);
  digitalWrite(KICKER_PIN, LOW);
  delay(2000);

  // Servo Mode Example:
  /*
  kicker.write(0);    // Kick
  delay(500);
  kicker.write(90);   // Reset
  delay(2000);
  */
}
