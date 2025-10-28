#pragma once

#include <string>
#include "SensorReading.h"

class Sensor {
private:
    std::string name;

public:
	Sensor(const std::string& name);  // Konstructor för att initiera sensorn med ett namn
	SensorReading read() const;  // Simulate reading from the sensor
    std::string getName() const;  
};

