# 📦 Bill of Materials – Robot Soccer Bot

This document lists all required components to build the basic Bluetooth-controlled robot soccer bot. It includes specifications, estimated costs, and reference links for sourcing.

---

## 🔧 Core Electronics

| Item                  | Specs / Notes                                 | Qty | Est. Price (USD) | Reference Link                                                                                                      |
| --------------------- | --------------------------------------------- | --- | ---------------- | ------------------------------------------------------------------------------------------------------------------- |
| **Microcontroller**   | Arduino Uno R3 / Nano / ESP32                 | 1   | \$3–\$10         | [ESP32 on Amazon](https://www.amazon.com/HiLetgo-ESP-WROOM-32-Development-Microcontroller-Integrated/dp/B0718T232Z) |
| **Motor Driver**      | TB6612FNG (preferred) / L298N                 | 1   | \$2–\$5          | [TB6612FNG on Amazon](https://www.amazon.com/TB6612-Driver-TB6612FNG-Arduino-Microcontroller/dp/B0CSY8CD97)         |
| **DC Motors (Gear)**  | 6V–12V DC motors with gearbox (TT or N20)     | 2–4 | \$1–\$3 each     | [TT Motor (x2)](https://www.amazon.com/Stemedu-Gearbox-Motor-Shaft-200RPM/dp/B08M67Q3TB)                            |
| **Bluetooth Module**  | HC-05 or use ESP32 with internal BT           | 1   | \$2–\$5          | [HC-05](https://www.amazon.com/HiLetgo-Wireless-Bluetooth-Transceiver-Arduino/dp/B071YJG8DR)                        |
| **Power Supply**      | 7.4V Li-ion or 2S LiPo battery (1000–2200mAh) | 1   | \$5–\$15         | [2S Li-ion Pack](https://www.amazon.com/Innovateking-Battery-2000mAh-Connector-Charger/dp/B07PVN3XZY)               |
| **Voltage Regulator** | AMS1117 or buck converter (for 5V logic)      | 1   | \$1–\$2          | [Buck Converter](https://www.amazon.com/dc-dc-buck-converter/s?k=dc-dc+buck+converter)                              |


---

## 🧱 Mechanical Components

| Item                  | Notes                                  | Qty | Est. Price | Link                                                                                              |
| --------------------- | -------------------------------------- | --- | ---------- | ------------------------------------------------------------------------------------------------- |
| **Robot Chassis**     | Acrylic or custom frame for 2WD/4WD    | 1   | \$6–\$12   | [Acrylic 2WD Kit](https://www.amazon.com/YIKESHU-Smart-Chassis-Encoder-Battery/dp/B073VHQT6P)     |
| **Wheels**            | Match motor shaft (TT/N20 compatible)  | 2–4 | \$1–\$2 ea | Included in chassis kit                                                                           |
| **Caster Wheel**      | Optional, for balance                  | 1   | \$1        | [Caster Wheel](https://www.amazon.com/ASHGOOB-Casters-Locking-Polyurethane-Castors/dp/B085RQFMYR) |
| **Mounting Hardware** | Screws, spacers, standoffs, glue, etc. | N/A | \$2–\$4    | General purpose                                                                                   |


---

## ⚽ Actuators and Extras
| Item                | Notes                                | Qty      | Est. Price | Link                                                                                                  |
| ------------------- | ------------------------------------ | -------- | ---------- | ----------------------------------------------------------------------------------------------------- |
| **Servo Motor**     | SG90 or MG90S (for kicker mechanism) | 1        | \$2–\$5    | [SG90 on Amazon](https://www.amazon.com/Micro-Helicopter-Airplane-Remote-Control/dp/B072V529YD)       |
| **Jumper Wires**    | Male-to-male and male-to-female      | 1 set    | \$2–\$4    | [Jumper Wires](https://www.amazon.com/Elegoo-EL-CP-004-Multicolored-Breadboard-arduino/dp/B01EV70C78) |
| **Breadboard**      | For prototyping connections          | 1        | \$2        | [Mini Breadboard](https://www.amazon.com/mini-breadboard/s?k=mini+breadboard)                         |
| **Switch**          | Optional power switch                | 1        | \$1        | [Toggle Switch](https://www.amazon.com/Toggle-Switch-Waterproof-Rubber-Certified/dp/B07B8W28Y4)       |
| **LED + Resistors** | Debugging indicators                 | Optional | \$1–\$2    | General purpose                                                                                       |


---

## 📱 Smartphone Interface

- **App Type**: MIT App Inventor (.aia file included in repo)
- **Device**: Android phone with Bluetooth
- **Optional Future**: Flutter app or web UI over Wi-Fi

---

## 🧪 Optional for Testing

| Item                    | Notes                               | Qty | Price  | Link                                                                                                  |
| ----------------------- | ----------------------------------- | --- | ------ | ----------------------------------------------------------------------------------------------------- |
| **Multimeter**          | For voltage/current troubleshooting | 1   | \~\$10 | [Multimeter](https://www.amazon.com/AstroAI-Multimeter-Voltmeter-Resistance-Continuity/dp/B0DJVDD84J) |
| **Logic Level Shifter** | Needed if mixing 3.3V/5V devices    | 1   | \~\$1  | [Shifter](https://www.amazon.com/3-3V-Logic-Level-Converter-Module/dp/B07QTKZSBT)                     |


---

## ⚠️ Notes

- Prices vary based on region and supplier. Links are for reference.
- You may 3D print your chassis/kicker parts — if so, add your STL files in [`hardware/chassis/`](../hardware/chassis/)
- ESP32 users may omit Bluetooth module and voltage regulator.

---

Feel free to contribute your own compatible hardware suggestions via pull request!
