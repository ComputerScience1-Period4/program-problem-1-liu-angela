/*
Angela Liu - 9/27 Period 7
Project 1
learn how to print things out
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause ()
// Namespaces
using namespace std; //*
// Functions()
void pause() {
	cout << "Press any keyto continue. . .";
	while (!_kbhit());
	_getch();
	cout << '\n';

}
// MAIN
void main() {
	// Define and Assgin your variable(s)
	char period = 52; // character value of 4
	// Display Text
	cout << "Angela Liu, Period : " << period << endl;
	pause(); //pauses to see displayed text
}
