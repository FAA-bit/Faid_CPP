// IntroApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>


int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "SV_se");
	
    std::cout << "Hallå Hallå!\n";
    
	int a = 5;
	float b = 3.5;
	double c = 2.555;
	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";
	std::cout << "c: " << c << "\n";
	float pi_f = 3.14f;
	std::cout << "pi_f: " << pi_f << "\n";


	bool is_app_running = true; // or false
	if (is_app_running) {
		std::cout << "App is running\n";
	}
	else {
		std::cout << "App is not running\n";
	}

	int user_is_signed_in = 0; // 0 - not signed in, 1 - signed in
	if (user_is_signed_in) {
		std::cout << "User is signed in\n";
	}
	else {
		std::cout << "User is not signed in\n";
	}

	// Jämför operators
	int isEqual = (a == 5); // 1 (true)
	int isNotEqual = (a != 5); // 0 (false)
	if (isEqual) {
		std::cout << "a is equal to 5\n";
	} else
		if (isNotEqual) {
		std::cout << "a is not equal to 5\n";
		}

	// Relational operators
	int isGreater = (a > 10); // 1 (true)
	int isLess = (a < 10); // 0 (false)
	if (isGreater) {
		std::cout << "a is greater than 10\n";
	}
	else
		if (isLess) {
			std::cout << "a is less than 10\n";
		}


	int user_age = 22;
	if (user_age < 18) {
		std::cout << "User can not go to the club\n";
	}
	else if (user_age >= 20) {
		std::cout << "User can go to the club\n";
	}
	else {
		std::cout << "User is too young\n";
	}
	

	// Upgift: Skriv ett program som frågar efter en temparatur.
	int temperatur;
	std::cout << "Ange en temperatur: ";
	std::cin >> temperatur;
	
	if (temperatur <= 0) {
		std::cout << "Det är Kallt!\n";
	}
	else if (temperatur >= 0 && temperatur <= 20) {
		std::cout << "Det är Svalt!\n";
	}
	else if (temperatur >= 21 && temperatur <= 30) {
		std::cout << "Det är Varmt!\n";
	}
	else {
		std::cout << "Det är Hett!\n";
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
