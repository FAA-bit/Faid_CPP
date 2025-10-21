// Filhantering_C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <locale>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "SV_se");

    // Skriva till fil.
    ofstream outFile("data.txt");
    if (!outFile) {
        cerr << "Kunde inte öppna filen!\n";
        return 1;
    }
    outFile << "Temperature: " << 23.5 << endl;
    outFile.close();
    cout << "Data har skrivits till data.txt" << endl;

    // Läsa från fil.
    ifstream inFile("data.txt");
    if (!inFile) {
        cerr << "Kunde inte öppna filen!\n";
        return 1;
    }

    string line;
    cout << "Innehåll i filen:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

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
