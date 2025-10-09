// RepetitionsOvningar_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

void calculateAndPrint()
{
	// Be anv�ndaren mata in tv� tal och ber�kna summan, skillnaden, produkten och kvoten.
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
	//  Deklarera en konstant f�r Pi och anv�nd den f�r att ber�kna cirkelns area.
	float radius;
	cout << "Ange cirkelns radie: ";
	cin >> radius;
	float area = 3.14f * radius * radius;
	cout << "Cirkelns area: " << area << endl;
}

void volumeOfCylinder()
{
	// Ber�kna volymen av en cylinder med given radie och h�jd.
	float radius, height;
	cout << "Ange cylinderns radie: ";
	cin >> radius;
	cout << "Ange cylinderns h�jd: ";
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
	// Skriv ett program som kontrollerar om ett �r �r ett skott�r(a leap year).
	int year;
	cout << "Ange ett �r: ";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << year << " �r ett skott�r." << endl;
	}
	else {
		cout << year << " �r inte ett skott�r." << endl;
	}
}
void menu()
{
	// G�r en enkel meny med switch (1: ber�kna area, 2: ber�kna volym, 3: avsluta).
	int choice;
	cout << "Meny:\n1: Ber�kna area\n2: Ber�kna volym\n3: Avsluta\nAnge ditt val: ";
	cin >> choice;
	switch (choice) {
	case 1: {
		float length, width;
		cout << "Ange l�ngd: ";
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
		cout << "Ange h�jd: ";
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
	// Be anv�ndaren mata in en karakt�r och kontrollera om det �r en vokal, konsonant eller inte en bokstav.
	char ch;
	cout << "Ange en karakt�r: ";
	cin >> ch;
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' || ch == '�' || ch == '�' || ch == '�') {
		cout << ch << " �r en vokal." << endl;
	}
	else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		cout << ch << " �r en konsonant." << endl;
	}
	else {
		cout << ch << " �r inte en bokstav." << endl;
	}
}

int main() {

	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "SV_se");
	cout << "H�lla H�lla!\n";

	// �vningar 1: Grundl�ggande in- och utmatning, variabler och datatyper
	calculateAndPrint();
	celsiusToFahrenheit();
	areaOfCircle();
	volumeOfCylinder();

	// �vningar 2: Villkorssatser (if och switch)
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
