#include <iostream>
#include "SensorReading.h"

void SensorReading::print() const {
	std::cout << "SensorReading(value=" << value << ", timestamp=" << timestamp << ")" << std::endl;
}  // Print the sensor reading details