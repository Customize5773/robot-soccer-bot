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
