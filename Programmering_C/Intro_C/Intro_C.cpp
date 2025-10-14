// Intro_C.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <windows.h>
#include <locale>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "SV_se"); // St�ller in lokaliseringsinst�llningar baserat p� anv�ndarens milj�. LC_ALL anger att alla kategorier ska p�verkas.

	char name[15];
	int age;
	// Fr�ga anv�ndaren om deras namn och �lder
	printf("What is your name?\n");
	scanf_s("%10s", name, 15); // L�s in en str�ng fr�n anv�ndaren. %s anv�nds f�r att formatera str�ngar i C, och 10 anger max antal tecken att l�sa in.

	printf("How old are you?\n");
	scanf_s("%d", &age); // L�s in ett heltal fr�n anv�ndaren. %d anv�nds f�r heltal och & anv�nds f�r att f� adressen till variabeln age.

	printf("Hej alla!\n Jag heter %s\n Am %d years old!\n", name, age); // Skriv ut en h�lsning med anv�ndarens namn och �lder.

	// Ber�kna summan av tv� tal
	int a = 5;
	int b = 10;
	int sum = a + b;
	printf("Summan av %d och %d �r %d\n", a, b, sum); // %d anv�nds f�r att formatera heltal i str�ngen.

	// Kontrollera om ett tal �r j�mnt eller udda
	int number;
	printf("Ange ett heltal: ");
	scanf_s("%d", &number);  // L�s in ett heltal fr�n anv�ndaren. %d anv�nds f�r heltal och & anv�nds f�r att f� adressen till variabeln number.
	if (number % 2 == 0) {
		printf("%d �r ett j�mnt tal.\n", number);
	}
	else {
		printf("%d �r ett udda tal.\n", number);
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
