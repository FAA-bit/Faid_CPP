// RepetitionsOvningar_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

void calculateAndPrint()
{
	// Be användaren mata in två tal och beräkna summan, skillnaden, produkten och kvoten.
	int num1, num2;
	cout << "Ange num1: ";
	cin >> num1;
	cout << "Ange num2: ";
	cin >> num2;
	cout << "Summa: " << num1 + num2 << endl;
	cout << "Skillnad: " << num1 - num2 << endl;
	cout << "Produkt: " << num1 * num2 << endl;
	cout << "Kvot: " << (num1) / num2 << endl;
}

void celsiusToFahrenheit()
{
	// Skriv ett program som konverterar Celsius till Fahrenheit.
	float celsius;
	cout << "Ange temperatur i Celsius: ";
	cin >> celsius;
	float fahrenheit = (celsius * 9 / 5) + 32;
	cout << "Temperatur i Fahrenheit: " << fahrenheit << endl;
}

void areaOfCircle()
{
	//  Deklarera en konstant för Pi och använd den för att beräkna cirkelns area.
	float radius;
	cout << "Ange cirkelns radie: ";
	cin >> radius;
	float area = 3.14f * radius * radius;
	cout << "Cirkelns area: " << area << endl;
}

void volumeOfCylinder()
{
	// Beräkna volymen av en cylinder med given radie och höjd.
	float radius, height;
	cout << "Ange cylinderns radie: ";
	cin >> radius;
	cout << "Ange cylinderns höjd: ";
	cin >> height;
	float volume = 3.14f * radius * radius * height;
	cout << "Cylinderns volym: " << volume << endl;
}
void checkNumbersign()
{
	int number;
	cout << "Ange ett heltal: ";
	cin >> number;
	if (number > 0) {
		cout << "Positivt" << endl;
	}
	else if (number < 0) {
		cout << "Negativt" << endl;
	}
	else {
		cout << "Noll" << endl;
	}
}

void checkLeapYear()
{
	// Skriv ett program som kontrollerar om ett år är ett skottår(a leap year).
	int year;
	cout << "Ange ett år: ";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << year << " är ett skottår." << endl;
	}
	else {
		cout << year << " är inte ett skottår." << endl;
	}
}
void menu()
{
	// Gör en enkel meny med switch (1: beräkna area, 2: beräkna volym, 3: avsluta).
	int choice;
	cout << "Meny:\n1: Beräkna area\n2: Beräkna volym\n3: Avsluta\nAnge ditt val: ";
	cin >> choice;
	switch (choice) {
	case 1: {
		float length, width;
		cout << "Ange längd: ";
		cin >> length;
		cout << "Ange bredd: ";
		cin >> width;
		cout << "Area: " << length * width << endl;
		break;
	}
	case 2: {
		float radius, height;
		cout << "Ange radie: ";
		cin >> radius;
		cout << "Ange höjd: ";
		cin >> height;
		cout << "Volym: " << 3.14f * radius * radius * height << endl;
		break;
	}
	case 3:
		cout << "Avslutar programmet." << endl;
		break;
	}
}

void characterCheck()
{
	// Be användaren mata in en karaktär och kontrollera om det är en vokal, konsonant eller inte en bokstav.
	char ch;
	cout << "Ange en karaktär: ";
	cin >> ch;
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' || ch == 'å' || ch == 'ä' || ch == 'ö') {
		cout << ch << " är en vokal." << endl;
	}
	else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		cout << ch << " är en konsonant." << endl;
	}
	else {
		cout << ch << " är inte en bokstav." << endl;
	}
}

int main() {

	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "SV_se");
	cout << "Hålla Hålla!\n";

	// Övningar 1: Grundläggande in- och utmatning, variabler och datatyper
	calculateAndPrint();
	celsiusToFahrenheit();
	areaOfCircle();
	volumeOfCylinder();

	// Övningar 2: Villkorssatser (if och switch)
	checkNumbersign();
	checkLeapYear();
	menu();
	characterCheck();

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
