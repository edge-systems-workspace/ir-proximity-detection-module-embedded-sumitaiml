#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using an IR proximity sensor.
 * @author SUMIT KUMAR SINGH
 * @date 1990-01-01
 *
 * @details
 * Reads digital input from an IR proximity sensor connected to a digital pin
 * and prints obstacle detection status over serial. The IR sensor used in this
 * example is assumed to be active LOW (sensor outputs LOW when an obstacle
 * is detected). Modify logic if your sensor behaves differently.
 */

const uint8_t IR_PIN = 2;
int sensorState = HIGH;

/**
 * @brief Initialize serial and IR input pin.
 *
 * Sets up Serial at 9600 baud and configures the IR pin as an input.
 */
void setup() {
    Serial.begin(9600);
    pinMode(IR_PIN, INPUT);
    Serial.println("IR Proximity Detection Initialized");
}

/**
 * @brief Main loop: read sensor and print detection status.
 *
 * Reads the digital state from the IR sensor and prints either
 * "Obstacle Detected" or "No Obstacle" with a short delay between readings.
 */
void loop() {
    sensorState = digitalRead(IR_PIN);

    if (sensorState == LOW) {
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }

    delay(300);
}
