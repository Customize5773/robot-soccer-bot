# 🤖 Robot Soccer Bot (Bluetooth Controlled)

A modular, beginner-friendly yet developer-focused **Arduino robot soccer player**, controlled via **smartphone Bluetooth** (HC-05 or ESP32). Built to be fast, responsive, and easily upgradeable.

---

## 📦 Features

- Controlled via smartphone joystick (MIT App Inventor or custom app)
- Modular and scalable folder structure for firmware and hardware
- Easily extendable to Wi-Fi, autonomous play, or computer vision
- Clean and documented Arduino code
- Ready-to-use test scripts

---

## 🛠️ Hardware Required

| Component          | Description                         |
|--------------------|-------------------------------------|
| Microcontroller    | Arduino Uno, Nano, or ESP32         |
| Motor Driver       | TB6612FNG or L298N                  |
| DC Motors          | With or without encoders (2x/4x)    |
| Bluetooth Module   | HC-05 or use ESP32's built-in       |
| Power Source       | 7.4V Li-ion or LiPo + regulator     |
| Chassis            | 2WD/4WD acrylic or custom frame     |
| Smartphone         | Android phone with Bluetooth        |

Full BOM available [here](hardware/bill-of-materials.md)

---

## 📲 Smartphone App

App is built with MIT App Inventor  
👉 Source: [`Coming Soon`)

Features:
- On-screen joystick for robot movement
- Toggle for kicker/servo

---

## 🚀 Quick Start

1. Wire your components using [this diagram](docs/wiring-diagram.png)
2. Upload `firmware/src/robot_soccer.ino` to Arduino
3. Pair phone to HC-05 or ESP32 Bluetooth
4. Open the MIT App, connect, and play!

---

## 🔧 Firmware Structure

```bash
firmware/
├── src/
│   └── robot_soccer.ino    # Main control logic
├── lib/                    # External/custom libraries
└── config.h                # Pins and tunable constants
```

---

📚 Documentation
- [Wiring Diagram]()
- [System Architecture]()
- [Control Flow]()

---

📜 License
MIT License — use freely, credit appreciated.
