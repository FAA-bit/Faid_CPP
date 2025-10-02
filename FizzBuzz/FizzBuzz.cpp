// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>
int main(){
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "SV_se");

	std::cout << "FizzBuzz programmet\n";

	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "FizzBuzz\n";
		}
		else if (i % 3 == 0) {
			std::cout << "Fizz\n";
		}
		else if (i % 5 == 0) {
			std::cout << "Buzz\n";
		}
		else {
			std::cout << i << "\n";
		}
	}


	// Prime Checker med while loop
	std::cout << "\nPrimtalskontroll\n";

	while (true) {
		int number;
		std::cout << "Ange ett num: ";
		std::cin >> number;
		if (number == 0) {
			break; // Avsluta loopen om användaren anger 0
		}
		if (number < 2) {
			std::cout << number << " är inte ett primtal.\n";
			continue; // Gå till nästa iteration av loopen
		}
		bool isPrime = true;
		for (int i = 2; i <= number / 2; i++) {
			if (number % i == 0) {
				isPrime = false;
				break; // Avbryt loopen om en delare hittas
			}
		}
		if (isPrime) {
			std::cout << number << " är ett primtal.\n";
		}
		else {
			std::cout << number << " är inte ett primtal.\n";
		}

	}


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
