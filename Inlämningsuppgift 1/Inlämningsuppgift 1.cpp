// Inlämningsuppgift 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>
#include <cmath>

int main() {
    
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "SV_se");
	std::cout << "Hej, världen!" << std::endl;

	const int MAX = 100;
	double mätvärden [MAX];
	int antal = 0;
	double input;
	std::cout << "Mata in mätvärden (avsluta med ´f´ ):" << std::endl;
	while (antal < MAX) {
		std::cout << "Mätvärde " << (antal + 1) << ": ";
		std::cin >> input;

		// visa felmeddelande vid felaktig inmatning
		if (std::cin.fail()) {
			std::cin.clear();

			char c;
			std::cin >> c;
			if (c == 'f' || c == 'F') {
				break;
			}
			else {
				std::cout << "Felaktig inmatning, försök igen." << std::endl;
				continue;
			}
		}
		mätvärden[antal] = input;
		antal++;

	}
	std::cout << "Du matade in " << antal << " mätvärden." << std::endl;

	// Beräkna: Antalvärden, summa, medelvärde, min- och max-värde, varians och standardavvikelse.
	if (antal == 0) {
		std::cout << "Inga mätvärden inmatade." << std::endl;
		return 0;
	}
	double summa = 0.0;
	double min = mätvärden[0];
	double max = mätvärden[0];
	for (int i = 0; i < antal; i++) {
		summa += mätvärden[i];
		if (mätvärden[i] < min) {
			min = mätvärden[i];
		}
		if (mätvärden[i] > max) {
			max = mätvärden[i];
		}
	}
	double medelvärde = summa / antal;
	double varians = 0.0;
	for (int i = 0; i < antal; i++) {
		varians += (mätvärden[i] - medelvärde) * (mätvärden[i] - medelvärde);
	}
	varians /= antal;
	double standardavvikelse = std::sqrt(varians);
	std::cout << "Summa: " << summa << std::endl;
	std::cout << "Medelvärde: " << medelvärde << std::endl;
	std::cout << "Min-värde: " << min << std::endl;
	std::cout << "Max-värde: " << max << std::endl;
	std::cout << "Varians: " << varians << std::endl;
	std::cout << "Standardavvikelse: " << standardavvikelse << std::endl;

	// Menygränssnitt: lägg till nya mätvärden, visa statistiken, Sök efter ett visst värde, sortera,  avsluta programmet.
	int val;
	do {
		std::cout << "\nMeny:\n";
		std::cout << "1. Lägg till nya mätvärden\n";
		std::cout << "2. Visa statistiken\n";
		std::cout << "3. Sortera mätvärden\n";
		std::cout << "4. Sök efter ett visst värde\n";
		std::cout << "5. Avsluta\n";
		std::cout << "Välj ett alternativ (1-5): ";
		std::cin >> val;
		switch (val) {
			case 1:
				// Lägg till nya mätvärden
				while (antal < MAX) {
					std::cout << "Mätvärde " << (antal + 1) << ": ";
					std::cin >> input;
					if (std::cin.fail()) {
						std::cin.clear();
						char c;
						std::cin >> c;
						if (c == 'f' || c == 'F') {
							break;
						}
						else {
							std::cout << "Felaktig inmatning, försök igen." << std::endl;
							continue;
						}
					}
					mätvärden[antal] = input;
					antal++;
				}
				break;
			case 2:
				// Visa statistiken
				std::cout << "Summa: " << summa << std::endl;
				std::cout << "Medelvärde: " << medelvärde << std::endl;
				std::cout << "Min-värde: " << min << std::endl;
				std::cout << "Max-värde: " << max << std::endl;
				std::cout << "Varians: " << varians << std::endl;
				std::cout << "Standardavvikelse: " << standardavvikelse << std::endl;
				break;
			case 3:
				// Sortera mätvärden
				for (int i = 0; i < antal - 1; i++) {
					for (int j = i + 1; j < antal; j++) {
						if (mätvärden[i] > mätvärden[j]) {
							double temp = mätvärden[i];
							mätvärden[i] = mätvärden[j];
							mätvärden[j] = temp;
						}
					}
				}
				std::cout << "Mätvärden sorterade." << std::endl;
				break;
			case 4:
				// Sök efter ett visst värde
				std::cout << "Ange värde att söka efter: ";
				std::cin >> input;
				{
					bool found = false;
					for (int i = 0; i < antal; i++) {
						if (mätvärden[i] == input) {
							std::cout << "Värdet " << input << " hittades på position " << (i + 1) << "." << std::endl;
							found = true;
						}
					}
					if (!found) {
						std::cout << "Värdet " << input << " hittades inte." << std::endl;
					}
				}
				break;
			case 5:
				std::cout << "Avslutar programmet." << std::endl;
				break;
			default:
				std::cout << "Felaktigt val, försök igen." << std::endl;
				break;

		}
	} while (val != 5
		&& antal < MAX
		&& antal > 0
		);
	if (antal == MAX) {
		std::cout << "Max antal mätvärden nått, avslutar programmet." << std::endl;
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
