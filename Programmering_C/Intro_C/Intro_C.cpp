// Intro_C.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <windows.h>
#include <locale>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "SV_se"); // Ställer in lokaliseringsinställningar baserat på användarens miljö. LC_ALL anger att alla kategorier ska påverkas.

	char name[15];
	int age;
	// Fråga användaren om deras namn och ålder
	printf("What is your name?\n");
	scanf_s("%10s", name, 15); // Läs in en sträng från användaren. %s används för att formatera strängar i C, och 10 anger max antal tecken att läsa in.

	printf("How old are you?\n");
	scanf_s("%d", &age); // Läs in ett heltal från användaren. %d används för heltal och & används för att få adressen till variabeln age.

	printf("Hej alla!\n Jag heter %s\n Am %d years old!\n", name, age); // Skriv ut en hälsning med användarens namn och ålder.

	// Beräkna summan av två tal
	int a = 5;
	int b = 10;
	int sum = a + b;
	printf("Summan av %d och %d är %d\n", a, b, sum); // %d används för att formatera heltal i strängen.

	// Kontrollera om ett tal är jämnt eller udda
	int number;
	printf("Ange ett heltal: ");
	scanf_s("%d", &number);  // Läs in ett heltal från användaren. %d används för heltal och & används för att få adressen till variabeln number.
	if (number % 2 == 0) {
		printf("%d är ett jämnt tal.\n", number);
	}
	else {
		printf("%d är ett udda tal.\n", number);
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
