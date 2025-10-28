#include <iostream>
#include "Car.h"

void Car::print() const {
    std::cout << "Car(reg=" << regNumber << ", arrival=" << arrivalTime << ")" << std::endl;
}  // Skriver ut bilens registreringsnummer och ankomsttid.
