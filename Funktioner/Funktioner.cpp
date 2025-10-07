// Funktioner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>
#include <cmath>
using namespace std;

// Funktioner för att hantera
float average(float a, float b, float c) {
    return (a + b + c) / 3;
}
void printSensor(float value) {
    cout << "Sensorvärde: " << value << endl;
}
float maxOfThree(float a, float b, float c) {
    float max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
void nice_greeting(string name) {
    cout << "Hej och välkommen!" << endl;
}
float celsiusToFahrenheit(float celsius) {
	return celsius * 9.0 / 5.0f + 32;
}
int main() {

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "SV_se");
	nice_greeting("Faid");

	// Exempelanvändning av temperaturkonverteringsfunktionen
	float tempC = 14.0;
	float tempF = celsiusToFahrenheit(tempC);
	cout << tempC << "°C är " << tempF << "°F" << endl;

	// Exempelanvändning av funktionerna
    float sensor1 = 23.5;
    float sensor2 = 27.8;
    float sensor3 = 22.1;

    printSensor(sensor1);
    printSensor(sensor2);
    printSensor(sensor3);

    float avg = average(sensor1, sensor2, sensor3);
    cout << "Genomsnitt av sensor 1 och 3: " << avg << endl;

    float maxSensor = maxOfThree(sensor1, sensor2, sensor3);
    cout << "Maximalt sensorvärde: " << maxSensor << endl;

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
