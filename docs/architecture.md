# 🧠 System Architecture – Robot Soccer Bot

This document outlines the high-level architecture of the robot soccer bot, including the interaction between hardware components, software layers, and communication flow.

---

## 🧱 System Overview

```
     Smartphone App (Bluetooth Joystick)
               ↓
      Bluetooth Communication (HC-05 or ESP32 BT)
               ↓
        Arduino Microcontroller (Uno/Nano/ESP32)
               ↓
  ┌────────────┬────────────┬────────────┐
  ↓            ↓            ↓            ↓
Motor Driver Servo/Kicker LED Debug (Future: Sensors)
(TB6612FNG) (SG90/MG90) (GPIO)
           ↓
Motors (2WD or 4WD Chassis)
```

---

## ⚙️ Key Components

### 🔹 Microcontroller (Arduino / ESP32)
- Central brain that interprets Bluetooth commands
- Controls motor direction, kicker, and debug outputs

### 🔹 Bluetooth Module
- **HC-05** if using Arduino Uno/Nano  
- **ESP32** has built-in Bluetooth Classic (used like Serial)

### 🔹 Motor Driver
- Receives directional signals from microcontroller
- Drives DC motors using PWM + direction control
- Recommended: TB6612FNG for efficiency and size

### 🔹 Power Management
- Motors: Powered via 7.4V Li-ion / LiPo battery
- Logic: 5V regulated for microcontroller and HC-05
- Use buck converter if needed to isolate power domains

---

## 📱 Communication Flow

1. **Joystick input from smartphone** (e.g., F/B/L/R/S/K)
2. **Bluetooth module receives data** as serial bytes
3. **Arduino parses command**, routes to respective control function:
   - Movement: sets motor driver pins
   - Kicker: toggles servo or solenoid
4. **Robot responds in real-time**, providing tactile feedback

---

## 🧩 Modularity & Expansion Points

- ✅ Easy to swap Bluetooth with Wi-Fi (ESP-NOW or UDP)
- ✅ Encoders and IMU can be added for closed-loop control
- ✅ Chassis/kicker can be upgraded independently
- ✅ Future versions may include vision module (Pixy2 or OpenCV)

---

## 🧪 System Diagram (Visual)

_Visual wiring diagram is available in_ [`docs/wiring-diagram.png`](./wiring-diagram.png)

---

