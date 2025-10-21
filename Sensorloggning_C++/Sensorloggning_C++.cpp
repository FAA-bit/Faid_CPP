// Sensorloggning_C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
#include <fstream> // for file handling
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream> // to build timestamp strings

using namespace std;

// Funktion f�r att h�mta aktuell tidsst�mpel
std::string getTimestamp() {
    time_t now = time(0);
    struct tm tid;
    localtime_s(&tid, &now); // Safe version

    std::stringstream ss;
    ss << std::put_time(&tid, "%Y-%m-%d %H:%M:%S");
    return ss.str();
}

int main() {
    setlocale(LC_ALL, "SV_se");
    vector<string> logg;
    vector<float> temperaturer;

    // Steg 1: Fr�ga anv�ndaren om 5 temperaturv�rden
    for (int i = 0; i < 5; ++i) {
        float temp;
        cout << "Ange temperaturv�rde #" << i + 1 << ": ";
        cin >> temp;

        string rad = getTimestamp() + " - " + to_string(temp);
        logg.push_back(rad);  // Spara hela raden med tid   
        temperaturer.push_back(temp);  // Spara bara v�rdet
    }

    // Steg 2: Spara till fil
    ofstream fil("temperatures.txt");
    for (const string& rad : logg) {
        fil << rad << endl;
    }
    fil.close();

    // Steg 3: L�s tillbaka och ber�kna medelv�rde
    ifstream inFil("temperatures.txt");
    string line;
    float sum = 0;
    int count = 0;

    cout << "\nInl�sta temperaturv�rden:\n";
    while (getline(inFil, line)) {
        cout << line << endl;

        // Extrahera temperatur fr�n raden
        size_t pos = line.find(" - ");
        if (pos != string::npos) {
            string tempStr = line.substr(pos + 3);
            float temp = stof(tempStr);
            sum += temp;
            count++;
        }
    }
    inFil.close();

    // Steg 4: Skriv ut medelv�rde
    if (count > 0) {
        float medel = sum / count;
        cout << "\nMedeltemperatur: " << medel << " �C" << endl;
    }
    else {
        cout << "Ingen data kunde l�sas fr�n filen." << endl;
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
