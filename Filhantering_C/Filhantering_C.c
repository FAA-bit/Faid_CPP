// Filhantering_C.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <stdio.h>

int main() {
    // 🔹 Skriva till fil
    FILE* file;
    if (fopen_s(&file, "data.txt", "w") != 0) {
        printf("Kunde inte öppna filen för skrivning!\n");
        return 1;
    }

    fprintf(file, "Temperature: %.2f\n", 23.5);
    if (fclose(file) != 0) {
        printf("Kunde inte stänga filen korrekt!\n");
    }


    // 🔹 Läsa från fil
    if (fopen_s(&file, "data.txt", "r") != 0) {
        printf("Kunde inte öppna filen för läsning!\n");
        return 1;
    }

    char line[100];
    printf("Innehåll i filen:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
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
