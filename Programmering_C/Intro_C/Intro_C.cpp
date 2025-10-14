// Intro_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <windows.h>
#include <locale>
#include <stdlib.h>

// Custom strlen function
int my_strlen(const char* str) {
    int length = 0;
    while (*str++) {
        length++;
    }
    return length;
}
// Trunka en sträng om den är för lång
void truncate_string(char* str, int max_length) {
    if (my_strlen(str) > max_length) {
        str[max_length] = '\0'; // Truncate the string
    }
}

// Command handler function
void handle_commands() {
    char command[10];
    int len;

    while (1) {
        printf("Enter command (LED=ON, LED=OFF, EXIT):\n");
        fgets(command, sizeof(command), stdin);

        // Remove newline character if present
        len = my_strlen(command);
        if (len > 0 && command[len - 1] == '\n') { 
            command[len - 1] = '\0';
        }

        if (strcmp(command, "LED=ON") == 0) {
            printf("LED is now ON\n");
        }
        else if (strcmp(command, "LED=OFF") == 0) {
            printf("LED is now OFF\n");
        }
        else if (strcmp(command, "EXIT") == 0) {
            printf("Exiting program.\n");
            break;
        }
        else {
            printf("Unknown command. Please try again.\n");
        }
    }
}

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, "SV_se");

    char name[25];
    int age;

    // Ask for name
    printf("What is your full name?\n");
    fgets(name, sizeof(name), stdin); // Read full line including spaces

    // Remove newline character if present
    int len = my_strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }
	truncate_string(name, 24); // Ensure name fits in the buffer

    // Ask for age
    printf("How old are you?\n");
    scanf_s("%d", &age);

    // Clear input buffer (in case user presses Enter after age)
    getchar();

    // Greet the user
	printf("Hello My name is %s\nAm %d years old!\n", name, age); // %s for string, %d for integer

	// Räkna vokaler som finns i namnet
	int vowel_count = 0;
	for (int i = 0; name[i] != '\0'; i++) {
		char ch = tolower(name[i]);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' || ch == 'å' || ch == 'ä' || ch == 'ö') {
			vowel_count++;
		}
	}
	printf("Your name contains %d vowels.\n", vowel_count);

    // Check if age is even or odd
    if (age % 2 == 0) {
        printf("Your age is an even number.\n");
    }
    else {
        printf("Your age is an odd number.\n");
    }

    // Show name length
    printf("Your name has %d characters.\n", my_strlen(name));

	// Handle commands
	handle_commands();


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
