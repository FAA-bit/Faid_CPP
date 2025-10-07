// mini sensor-modul.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>
#include <cstdlib>   // För rand()
#include <ctime>     // För time()

using namespace std;

// Genererar ett slumpvärde mellan 0–100
float readSensor() {
    return static_cast<float>(rand() % 101); // 0 till 100
}

// Skriver ut sensordata med enhet
void printSensorData(const float& value) {
    cout << "Sensorvärde: " << value << " °C" << endl;
}

// Modifierar värdet om det är över 80
void analyzeSensor(float& value) {
    if (value > 80.0) {
        cout << "⚠️ Varning: Högt sensorvärde! Justerar..." << endl;
        value = 80.0; // Begränsa till max 80
    }
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "SV_se");
    srand(static_cast<unsigned int>(time(0))); // Initiera slumpgenerator

    const int antalSensorer = 5;
    for (int i = 0; i < antalSensorer; i++) {
        float sensorValue = readSensor();
        printSensorData(sensorValue);
        analyzeSensor(sensorValue);
        cout << "Efter analys: " << sensorValue << " °C" << endl;
        cout << "-----------------------------" << endl;
    }

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
