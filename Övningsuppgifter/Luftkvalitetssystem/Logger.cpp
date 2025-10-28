#include <iostream>
#include "Logger.h"

void Logger::log(const SensorReading& reading, const std::string& sensorName) const {
    std::cout << "Logging from sensor: " << sensorName << std::endl;
    reading.print();
}
