// Parkeringssystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Main.cpp

#include <iostream>

#include "Car.h"
#include "ParkingHouse.h"

int main() {

    Car c1{ "ABC123", "2025-10-28 14:00" };
    Car c2{ "XYZ789", "2025-10-28 14:30" };
    Car c3{ "LMN456", "2025-10-28 15:00" };
    Car c4{ "OPQ135", "2025-10-28 15:30" };
    Car c5{ "DEF792", "2025-10-28 16:00" };
    Car c6{ "GHI468", "2025-10-28 16:30" };
    Car c7{ "STU888", "2025-10-28 17:00" };


    ParkingHouse house;
    house.addCar(c1);
    house.addCar(c2);
    house.addCar(c3);
    house.addCar(c4);
    house.addCar(c5);
    house.addCar(c6);
    house.addCar(c7);

    std::cout << "Before removal:\n";
    house.printStatus();

    std::cout << "\nRemoving car with reg 'OPQ135'\n";
    house.removeCar("OPQ135");

    std::cout << "\nAfter removal:\n";
    house.printStatus();

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
