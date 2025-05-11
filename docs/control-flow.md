# 🔄 Control Flow – Robot Soccer Bot

This file explains how the robot interprets commands and translates them into motor actions or kicker triggers.

---

## 🧭 High-Level Control Flow

```plaintext
Start
  ↓
Initialize Pins, Serial, Bluetooth
  ↓
Main Loop
  ├─> Check if Bluetooth data available
  │    ├─> If data exists: read command byte
  │    │    ├─> F → moveForward()
  │    │    ├─> B → moveBackward()
  │    │    ├─> L → turnLeft()
  │    │    ├─> R → turnRight()
  │    │    ├─> S → stopMotors()
  │    │    ├─> K → kickBall()
  │    │    └─> unknown → ignore
  │    └─> No data → idle
  ↓
Repeat loop
````

---

## 🔡 Command Mapping Table

| Bluetooth Command | Action          | Function Called  |
| ----------------- | --------------- | ---------------- |
| `F`               | Move Forward    | `moveForward()`  |
| `B`               | Move Backward   | `moveBackward()` |
| `L`               | Turn Left       | `turnLeft()`     |
| `R`               | Turn Right      | `turnRight()`    |
| `S`               | Stop All Motors | `stopMotors()`   |
| `K`               | Activate Kicker | `kickBall()`     |

---

## 🧩 Function Responsibilities

### `moveForward()`

* Sets left/right motors to forward pins HIGH
* Backward pins set to LOW

### `moveBackward()`

* Reverses both motors

### `turnLeft()` / `turnRight()`

* One motor forward, the other backward

### `stopMotors()`

* Sets all motor control pins LOW

### `kickBall()`

* Turns kicker output HIGH for 200ms, then LOW

---

## 💬 Control Best Practices

* Commands are single characters to reduce latency
* You can debounce or limit commands on the mobile app to avoid spamming
* Future improvements: queue-based command system or PID-based drive logic

---

## 🔧 Future Control Enhancements

* ⚙️ **PWM Speed Control**: Use analogWrite for variable speeds
* 🧭 **IMU Correction**: Adjust motor speeds based on robot tilt/yaw
* 🧠 **Autonomous Assist**: E.g., auto-align to ball before kicking

---

For real-world implementation, see [`firmware/src/robot_soccer.ino`](../firmware/src/robot_soccer.ino)
