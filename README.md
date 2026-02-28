[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/XjlPLrqV)
# 🚧 Embedded Obstacle Detection System – IR Sensor

![License](https://img.shields.io/badge/license-MIT-blue)
![Platform](https://img.shields.io/badge/platform-Arduino-orange)
![Language](https://img.shields.io/badge/language-C++-blue)

An embedded obstacle detection system using an Infrared (IR) proximity sensor for digital object detection and structured event-driven control logic.

---

## 📑 Table of Contents

- Project Overview
- Hardware Requirements
- Software Requirements
- Wiring Connections
- Working Principle
- Code Structure
- Documentation Requirement
- Submission Requirements
- Future Improvements
- License

---

## 🚀 Project Overview

This project demonstrates object detection using an IR proximity sensor and Arduino (Uno R4 recommended).

The system:

- Detects nearby objects
- Reads digital HIGH/LOW signal
- Implements event-based logic
- Displays structured serial output
- Follows Doxygen documentation standards
- Enforces Git-based development discipline

This project introduces:

- Digital sensor interfacing
- Proximity detection logic
- Event-driven programming
- Embedded system structuring

---

## 🔧 Hardware Requirements

- Arduino Uno R4
- IR Obstacle Detection Sensor Module
- Breadboard
- Jumper wires
- USB cable

---

## 💻 Software Requirements

- Arduino IDE
- Git
- GitHub Account

---

## 🔌 Wiring Connections

| IR Sensor Pin | Arduino |
|---------------|----------|
| VCC           | 5V       |
| GND           | GND      |
| OUT           | Digital Pin 2 |

---

## ⚙ Working Principle

- IR sensor emits infrared light.
- When object is near, IR reflects back.
- Sensor module outputs digital signal.
- Arduino reads HIGH/LOW to detect obstacle.

---

## 🧠 Code Structure

The system:

1. Initializes Serial communication
2. Configures digital input pin
3. Reads obstacle state
4. Detects object presence
5. Displays structured output

---

## 📚 Documentation Requirement

Students must include:

- File-level Doxygen documentation block
- Function documentation for:
  - `setup()`
  - `loop()`
- Required tags:
  - `@file`
  - `@brief`
  - `@author`
  - `@date`

---

## 📊 Submission Requirements

- Minimum 5 meaningful commits
- Proper commit message format
- All TODO tasks completed
- Doxygen documentation included
- Code must compile successfully

---

## 🔮 Future Improvements

- Integrate buzzer alert
- Add LED indicator
- Build obstacle-avoiding robot
- Combine with servo for scanning
- IoT-based obstacle monitoring

---

## 📜 License

This project is licensed under the MIT License.
