// Klasser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Sensor {
private: 
    int id;
    string unit;
    float value;

public:
    // Konstruktor
    Sensor(int new_id, const string& u, float v)
        : id (new_id), unit(u), value(v) {}

    void printInfo() const {
        cout << "Sensor ID: " << id << endl;
        cout << "Unit: " << unit << endl;
        cout << "Value: " << value << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    
    Sensor sensor1(1, "Celsius", 23.5);
    Sensor sensor2(2, "Watt", 300.0f);

    sensor1.printInfo();
    sensor2.printInfo();

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
