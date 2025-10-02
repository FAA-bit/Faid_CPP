// Miniräknare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() 
{
	double tal1, tal2, resultat;
	char operatorSysmbol;

	// Ta emot två tal 
	cout << "Ange tal1: ";
	cin >> tal1;

	cout << "Ange tal2: ";
	cin >> tal2;

	// Ta emot operator	
	cout << "Välj operator (+, -, *, /): ";
	cin >> operatorSysmbol;

	// Utför beräkning baserat på operator
	switch (operatorSysmbol) {
		case '+':
			resultat = tal1 + tal2;
			cout << "Resultat: " << resultat << endl;
			break;
		case '-':
			resultat = tal1 - tal2;
			cout << "Resultat: " << resultat << endl;
			break;
		case '*':
			resultat = tal1 * tal2;
			cout << "Resultat: " << resultat << endl;
			break;
		case '/':
			if (tal2 != 0) {
				resultat = tal1 / tal2;
				cout << "Resultat: " << resultat << endl;
			} else {
				cout << "Fel: Division med noll är inte tillåten." << endl;
			}
			break;
		default:
			cout << "Fel: Ogiltig operator." << endl;
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
