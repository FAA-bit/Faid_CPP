#include "Sensor.h"

Sensor::Sensor(const std::string& name) : name(name) {}  

std::string Sensor::getName() const {
    return name;
}

SensorReading Sensor::read() const {  // Simulate reading from the sensor
    SensorReading reading;
    reading.value = 42.0; 
    reading.timestamp = "2025-10-28 14:35";
    return reading;
}
