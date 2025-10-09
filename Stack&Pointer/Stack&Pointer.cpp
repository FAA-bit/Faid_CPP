// Stack&Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void swap(int* a, int* b) {
	int temp = *a;  // * dereferensiering - Hämtar värdet på adressen.
    *a = *b;
    *b = temp;
}
void setLedState(bool*led, bool state) {
	*led = state;
}
void getTempRange(float* minTemp, float* maxTemp) {
    *minTemp = -10.0;
	*maxTemp = 40.0;
}
void modify(int& ref) {
    ref = ref + 10;
}

int main()
{
    cout << "Hello Stack&Pointer!\n"; 
    int x = 10;
    int y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
	swap(&x, &y); // & adressoperator - Hämtar adressen till en variabel.
    cout << "After swap: x = " << x << ", y = " << y << endl;

    bool led = false;
	setLedState(&led, true);
	cout << "LED state: " << (led ? "ON" : "OFF") << endl;

    float minTemp, maxTemp;
    getTempRange(&minTemp, &maxTemp);
    cout << "Temperature range: " << minTemp << " to " << maxTemp << endl;

	int a = 5;
	modify(a);
	cout << "Modified a: " << a << endl;

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
