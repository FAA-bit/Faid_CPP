// Struct_Device.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Device {
    int id;
    string type;
    bool active;
    float value;
};
void printDevice(const Device& d) {
    cout << "Device ID: " << d.id << endl;
    cout << "Type: " << d.type << endl;
    string state = (d.active ? "YES" : "NO");
    cout << "Active: " << state << endl;
    cout << "Value: " << d.value << endl;
    cout << "..........................." << endl;
}

int main() {
    // Device på stacken 
    Device d1 = { 1, "Sensor", true, 23.5f };
    Device d2 = { 2, "Actuator", false, 10.0f };

    // Exempel för Device på heapen.
    // Device* d2 = new Device {2, "Actuator", false, 10.0f }
    // Ändra värden på value-attributet för varje instans
    // d2->value = 77.7f;
    // printa adressen 
    // cout << "Address of heap Device (d2): " << d2 << endl;
    // printDevice(*d2)
    // delete d2;


    printDevice(d1);
    printDevice(d2);

    Device userDevice;
    cout << "Enter device id: ";
    cin >> userDevice.id;
    cout << "Enter device type: ";
    cin >> userDevice.type;
    cout << "Is device active? (1 for YES, 0 for NO): ";
    cin >> userDevice.active;
    cout << "Enter device value: ";
    cin >> userDevice.value;

    printDevice(userDevice);

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
