/*
 * Bluetooth Test – Echo test to verify BT serial communication
 * Use Serial Monitor on PC and Bluetooth terminal app on phone.
 * Type from phone → echoed on Serial Monitor
 * Type from PC → echoed to phone via Bluetooth
 */

#include "../firmware/config.h"

#ifdef USE_SOFTWARE_SERIAL
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(BLUETOOTH_RX, BLUETOOTH_TX);
#else
#define BTSerial Serial
#endif

void setup() {
  Serial.begin(9600);        // USB Serial Monitor
  BTSerial.begin(9600);      // Bluetooth HC-05 or ESP32 BT
  Serial.println("Bluetooth Test Ready");
}

void loop() {
  if (BTSerial.available()) {
    char c = BTSerial.read();
    Serial.print("From Phone: ");
    Serial.println(c);
  }

  if (Serial.available()) {
    char c = Serial.read();
    BTSerial.print(c); // Send to phone
  }
}
