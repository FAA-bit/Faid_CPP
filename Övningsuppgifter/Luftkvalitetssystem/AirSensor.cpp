#include "AirSensor.h"

AirSensor::AirSensor(const std::string& name) : name(name) {}

SensorReading AirSensor::read() const {
    SensorReading r;
    r.value = 42.0; // dummy value
    r.timestamp = "2025-10-28 15:00"; // dummy timestamp
    return r;
}

std::string AirSensor::getName() const {
    return name;
}
