// Inlämningsuppgift 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>
#include <cmath>

using namespace std;

int main() {
    
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "SV_se");
	cout << "Hej, världen!" << std::endl;

	const int MAX = 100;
	double mätvärden [MAX];
	int antal = 0;
	double input;
	cout << "Mata in mätvärden (avsluta med ´f´ ):" << std::endl;
	while (antal < MAX) {
		cout << "Mätvärde " << (antal + 1) << ": ";
		cin >> input;

		// visa felmeddelande vid felaktig inmatning
		if (cin.fail()) {
			cin.clear();

			char c;
			cin >> c;
			if (c == 'f' || c == 'F') {
				break;
			}
			else {
				cout << "Felaktig inmatning, försök igen." << std::endl;
				continue;
			}
		}
		mätvärden[antal] = input;
		antal++;

	}
	cout << "Du matade in " << antal << " mätvärden." << std::endl;

	// Beräkna: Antalvärden, summa, medelvärde, min- och max-värde, varians och standardavvikelse.
	if (antal == 0) {
		cout << "Inga mätvärden inmatade." << std::endl;
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
	cout << "Summa: " << summa << std::endl;
	cout << "Medelvärde: " << medelvärde << std::endl;
	cout << "Min-värde: " << min << std::endl;
	cout << "Max-värde: " << max << std::endl;
	cout << "Varians: " << varians << std::endl;
	cout << "Standardavvikelse: " << standardavvikelse << std::endl;

	// Menygränssnitt: lägg till nya mätvärden, visa statistiken, Sök efter ett visst värde, sortera,  avsluta programmet.
	int val;
	do {
		cout << "\nMeny:\n";
		cout << "1. Lägg till nya mätvärden\n";
		cout << "2. Visa statistiken\n";
		cout << "3. Sortera mätvärden\n";
		cout << "4. Sök efter ett visst värde\n";
		cout << "5. Avsluta\n";
		cout << "Välj ett alternativ (1-5): ";
		cin >> val;
		switch (val) {
			case 1:
				// Lägg till nya mätvärden
				while (antal < MAX) {
					cout << "Mätvärde " << (antal + 1) << ": ";
					cin >> input;
					if (cin.fail()) {
						cin.clear();
						char c;
						cin >> c;
						if (c == 'f' || c == 'F') {
							break;
						}
						else {
							cout << "Felaktig inmatning, försök igen." << std::endl;
							continue;
						}
					}
					mätvärden[antal] = input;
					antal++;
				}
				break;
			case 2:
				// Visa statistiken
				cout << "Summa: " << summa << std::endl;
				cout << "Medelvärde: " << medelvärde << std::endl;
				cout << "Min-värde: " << min << std::endl;
				cout << "Max-värde: " << max << std::endl;
				cout << "Varians: " << varians << std::endl;
				cout << "Standardavvikelse: " << standardavvikelse << std::endl;
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
				cout << "Mätvärden sorterade." << std::endl;
				break;
			case 4:
				// Sök efter ett visst värde
				cout << "Ange värde att söka efter: ";
				cin >> input;
				{
					bool found = false;
					for (int i = 0; i < antal; i++) {
						if (mätvärden[i] == input) {
							cout << "Värdet " << input << " hittades på position " << (i + 1) << "." << std::endl;
							found = true;
						}
					}
					if (!found) {
						cout << "Värdet " << input << " hittades inte." << std::endl;
					}
				}
				break;
			case 5:
				cout << "Avslutar programmet." << std::endl;
				break;
			default:
				cout << "Felaktigt val, försök igen." << std::endl;
				break;

		}
	} while (val != 5
		&& antal < MAX
		&& antal > 0
		);
	if (antal == MAX) {
		cout << "Max antal mätvärden nått, avslutar programmet." << std::endl;
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
