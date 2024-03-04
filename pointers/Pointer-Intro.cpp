// Pointer Intro
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// Idea: Pointers store *ADDRESSES*

	int x = 3;		// x is an integer variable
	int* y = &x;	// y is an integer pointer, &x is the address of x

	cout << x << endl;
	cout << y << endl;
	cout << *y << endl;


	// C-Strings: char arrays which end with an exit char ('\0')

	// Note: This array is of size 4 to account for exit char
	char cstr[] = "hey";
	cout << *cstr << endl;

}