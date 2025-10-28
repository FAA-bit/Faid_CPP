#include <iostream>
#include "ParkingHouse.h"

void ParkingHouse::addCar(const Car& car) {
    cars.push_back(car);
}

bool ParkingHouse::removeCar(const std::string& regNumber) {  // Detta är en for-loop som går igenom varje element i bilvektorn — en bil i taget.
	for (auto it = cars.begin(); it != cars.end(); ++it) {  
        // Deklarerar en iterator med namnet - it
        // auto - är en C++-funktion som automatiskt bestämmer typen av en variabel baserat på dess initialiseringsvärde.
        // it != cars.end() - Loopen fortsätter tills den når slutet av vektorn.
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
