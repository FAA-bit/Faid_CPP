#include <iostream>
#include "ParkingHouse.h"

void ParkingHouse::addCar(const Car& car) {
    cars.push_back(car);
}

bool ParkingHouse::removeCar(const std::string& regNumber) {  // Detta �r en for-loop som g�r igenom varje element i bilvektorn � en bil i taget.
	for (auto it = cars.begin(); it != cars.end(); ++it) {  
        // Deklarerar en iterator med namnet - it
        // auto - �r en C++-funktion som automatiskt best�mmer typen av en variabel baserat p� dess initialiseringsv�rde.
        // it != cars.end() - Loopen forts�tter tills den n�r slutet av vektorn.
        if (it->regNumber == regNumber) {
            cars.erase(it);
            return true;
        }
    }
    return false;
}

void ParkingHouse::printStatus() const {
    std::cout << "Current parked cars:\n";
    for (const auto& car : cars) {
        car.print();
    }
}
