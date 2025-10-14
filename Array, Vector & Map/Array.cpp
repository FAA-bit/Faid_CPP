// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>
#include <vector>
#include <map>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "SV_se");
	cout << "Hej världen!" << endl;

	// Array
	int temaperature[] = { 20, 22, 21, 19, 24, 25, 23 };
	for (int i = 0; i < 7; i++) {
		cout << "The temperature on day " << (i + 1) << " was: " << temaperature[i] << "°C" << endl;
	}

	// Vector
	vector<int> temperatures = { 20, 22, 21, 19, 24, 25, 23 };
	for (int i = 0; i < temperatures.size(); i++) {
		cout << "The temperature on day " << (i + 1) << " was: " << temperatures[i] << "°C" << endl;
	}

	// Map
	map<string, int> tempMap = {
		{"Monday", 20},
		{"Tuesday", 22},
		{"Wednesday", 21},
		{"Thursday", 19},
		{"Friday", 24},
		{"Saturday", 25},
		{"Sunday", 23}
	};
	for (const auto& day : tempMap) {
		cout << "The temperature on " << day.first << " was: " << day.second << "°C" << endl;
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
