// Shop_Simulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Main.cpp 

#include "Shop.h"

int main() {
    Shop shop;
    shop.addItem(std::make_unique<FoodItem>("Apple", 5, 95));
    shop.addItem(std::make_unique<FoodItem>("Bread", 20, 250));
    shop.addItem(std::make_unique<Item>("Notebook", 15));
    shop.addItem(std::make_unique<Item>("Pen", 10));
    shop.addItem(std::make_unique<FoodItem>("Milk", 12, 150));
    shop.addItem(std::make_unique<FoodItem>("Godis", 8, 30));
	shop.addItem(std::make_unique<ToolItem>("Hammer", 50, 100));

    Customer customer1("Alice", 40, { "Apple", "Milk", "Bread" });
    Customer customer2("Bob-Bob", 30, { "Notebook", "Pen" });
    Customer customer3("Faid", 75, { "Godis", "Hammer"});

    customer1.tryToBuy(shop);
    customer2.tryToBuy(shop);
	customer3.tryToBuy(shop);

    shop.printInventory();
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
