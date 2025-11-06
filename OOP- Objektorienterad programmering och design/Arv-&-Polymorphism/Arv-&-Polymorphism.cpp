// Arv-&-Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
// Arv - är när en klass (child/derived class) ärver egenskaper och beteenden från en annan klass (parent/base class)
// Arv - base class_(parent) och derived class_(child)
// Base class - parent class
class Vehicle {
public:
    string brand = "Ford";
    void honk() {
        cout << "Tuut, tuut! \n";
    }
};
// Derived class - child class
class Car : public Vehicle {
public:
    string model = "Mustang";
};
// Derived class - grandchild class
class ElectricCar : public Car {
    public:
    string batteryType = "Lithium-ion";
};

// Polymorphism - är när en funktion kan ha olika former beroende på objektet som anropar den
// Base class
class Animal {
public:
    void animalSound() {
        cout << "The animal makes a sound \n";
    }
};
// Derived class
class Pig : public Animal {
public:
    void animalSound() {
        cout << "The pig says: wee wee \n";
    }
};
// Derived class
class Cat : public Animal {
    public:
    void animalSound() {
        cout << "The cat says: meow meow \n";
    }
};

// Virtual funktion - is a function that can be overridden in a derived class.
class MyAnimal {
public:
    virtual void Sound() {
        cout << "The animal makes a sound \n";
    }
};
// Derived class - med Virtual function 
class Dog : public MyAnimal {
public:
    void Sound() override {
        cout << "The dog barks \n";
    }
};
int main() {
    
	cout << "-----Arv-----" << endl;
    Car myCar;
    cout << "My " << myCar.brand + " " + myCar.model << " car makes ";
    myCar.honk();
	ElectricCar myElectricCar;
	cout << "My " << myElectricCar.brand + " " + myElectricCar.model + " electric car has a " + myElectricCar.batteryType + " battery." << endl;

	cout << "\n-----Polymorphism-----" << endl;
	Animal a;
    Pig myPig;
	Cat myCat;

    a.animalSound();
    myPig.animalSound();
	myCat.animalSound();

	cout << "\n-----Virtual Funktion-----" << endl;
	MyAnimal* b;
	Dog mydog;
	b = &mydog; // & är adress operator som ger adressen till objektet, den sparas i pekaren b
	b->Sound(); // -> är pekar på objektet, den anropar funktionen Sound()

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
