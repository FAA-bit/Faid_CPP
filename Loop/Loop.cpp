// Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>
#include <vector>




int main() {

	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "SV_se");
	std::cout << "Hej!\n";

	// for loop
	for (int i = 0; i < 5; i++) {
		std::cout << "Index: " << i << std::endl;
		for (int j = 0; j < 3; j++) {
			std::cout << "Inre index: " << j << std::endl;
		}
	}
	std::cout <<"Loop genom array med hjälp av index" << std::endl;
	int arr[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << std::endl;
		//size_of() - storlek på en datatyp i bytes
		// sizeof(int) = 4 bytes
		// sizeof(float) = 4 bytes
		// sizeof(double) = 8 bytes
		// sizeof(arr) = 20 bytes
		// sizeof(arr[0]) = 4 bytes
		// 20 / 4 = 5 elements <--- size of array
	}
	int numbers[] = { 10, 20, 30, 40, 50 };
	for (int num : numbers) {
		std::cout << num << std::endl;
	}


	// while loop
	int number = 0;
	while (number < 5) {
		std::cout << "Number: " << number << std::endl;
		number++;
	}
	int i = 0;
	while(i != 5) {
		std::cout << "Guess the number btw 1-15: ";
		std::cin >> i;
	}

	// do while loop
	int x = 0;
	do {
		std::cout << "Do-While Loop, number: " << x << std::endl;
		x++;
	} while (x < 5);


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
