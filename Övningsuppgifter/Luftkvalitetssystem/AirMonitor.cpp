
#include "AirMonitor.h"

AirMonitor::AirMonitor(const std::vector<AirSensor>& sensors) : sensors(sensors) {} // Member initializer list
void AirMonitor::addSensor(const AirSensor& sensor) {  // Add a new sensor to the monitor
	sensors.push_back(sensor);
}
void AirMonitor::logAll() const {  // Log all sensor readings
	Logger logger;
	for (const auto& sensor : sensors) {
		SensorReading reading = sensor.read();
		logger.log(reading, sensor.getName());
	}
}
