#pragma once

#include <string>

struct SensorReading {   // Represents a reading from a sensor
    double value;
    std::string timestamp;

    void print() const;
};
