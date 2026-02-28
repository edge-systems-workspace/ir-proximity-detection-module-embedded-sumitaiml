#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author SUMIT KUMAR SINGH
 * @date 2026-02-28
 *
 * @details
 * Reads digital input from an IR proximity sensor connected to a digital pin
 * and prints obstacle detection status over serial.
 *
 * @note This example assumes the IR sensor's digital output is LOW when an
 * obstacle is detected (active LOW). Change the logic in loop() if your
 * sensor behaves differently.
 */

/** IR sensor digital pin (D2) */
const uint8_t IR_PIN = 2;

/** Stores the last read state of the IR sensor (HIGH/LOW) */
int sensorState = HIGH;

/**
 * @brief Initialize serial and IR input pin
 *
 * Initializes Serial at 9600 baud and configures the IR pin as an INPUT.
 */
void setup() {
    Serial.begin(9600);
    pinMode(IR_PIN, INPUT);
    Serial.println("IR Proximity Detection Initialized");
}

/**
 * @brief Main loop: read sensor and print detection status
 *
 * Reads the digital state from the IR sensor and prints either
 * "Obstacle Detected" or "No Obstacle". Adds a short delay to avoid
 * spamming the serial output.
 */
void loop() {
    sensorState = digitalRead(IR_PIN);

    if (sensorState == LOW) {
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }

    delay(300); // 300ms between readings
}
