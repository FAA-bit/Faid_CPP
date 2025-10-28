// Sensor, Reading och Logger.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Main.cpp

#include <iostream>
#include "Sensor.h"
#include "Logger.h"

int main() {
    Sensor s1("TemperatureSensor");
    Sensor s2("PressureSensor");

    Logger logger;

    SensorReading r1 = s1.read();
    SensorReading r2 = s2.read();

    logger.log(r1, s1.getName());
    logger.log(r2, s2.getName());

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
