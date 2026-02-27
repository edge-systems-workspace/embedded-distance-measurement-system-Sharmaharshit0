#include <Arduino.h>
#define trigPin 9
#define echoPin 10

long duration;
float distance;
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author Harshit Sharma
 * @date 2026-02-27
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define TRIG pin (Use pin 9)

 // TODO 2:
 // Define ECHO pin (Use pin 10)

 // TODO 3:
 // Create variable to store duration

 // TODO 4:
 // Create variable to store calculated distance

void setup() {
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    // TODO 5:
    // Initialize Serial communication (9600 baud rate)

    // TODO 6:
    // Configure TRIG as OUTPUT

    // TODO 7:
    // Configure ECHO as INPUT

    // TODO 8:
    // Print system initialization message
}

void loop() {


    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    // TODO 9:
    // Set TRIG LOW for 2 microseconds

    // TODO 10:
    // Send 10 microsecond pulse on TRIG

    // TODO 11:
    // Measure pulse duration on ECHO using pulseIn()

    // TODO 12:
    // Calculate distance in cm

    // TODO 13:
    // Print calculated distance

    // TODO 14:
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(500);
    // Add delay (500ms)
}
