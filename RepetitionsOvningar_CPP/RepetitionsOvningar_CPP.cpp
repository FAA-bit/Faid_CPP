// RepetitionsOvningar_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

int main() {

	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "SV_se");
	cout << "Hålla Hålla!\n";

	// Övningar: Variabler och datatyper
	// Deklarera och initiera variabler av typerna int, float, double och char.
	// Be användaren mata in två tal och beräkna summan, skillnaden, produkten och kvoten.
	// Skriv ett program som konverterar Celsius till Fahrenheit.
	//  Deklarera en konstant för Pi och använd den för att beräkna cirkelns area.
	int a = 10;
	int b = 5;
	float c = 3.14f;
	double d = 2.71828;
	char e = 'A';
	cout << "Ange två tal: ";
	int num1, num2;
	cin >> num1 >> num2;
	cout << "Summa: " << num1 + num2 << endl;
	cout << "Skillnad: " << num1 - num2 << endl;
	cout << "Produkt: " << num1 * num2 << endl;
	cout << "Kvot: " << static_cast<float>(num1) / num2 << endl;
	float celsius;
	cout << "Ange temperatur i Celsius: ";
	cin >> celsius;
	float fahrenheit = (celsius * 9 / 5) + 32;
	cout << "Temperatur i Fahrenheit: " << fahrenheit << endl;
	const double pi = 3.14;
	double radius;
	cout << "Ange cirkelns radie: ";
	cin >> radius;
	double area = pi * radius * radius;
	cout << "Cirkelns area: " << area << endl;



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
