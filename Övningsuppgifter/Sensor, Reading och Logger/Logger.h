#pragma once

#include <string>
#include "SensorReading.h"

class Logger {
public:
	void log(const SensorReading& reading, const std::string& sensorName) const;  // Loggar en sensoravl�sning med sensorens namn
};

