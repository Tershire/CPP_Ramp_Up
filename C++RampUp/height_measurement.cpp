// height_measurement.cpp
// 2023 JUL 05
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "height.h"

using std::cout;


// PROTOTYPE //////////////////////////////////////////////////////////////////
void display(const Height& height, int n);


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	// initiation -------------------------------------------------------------
	Height alice = 69.3;		// implicit conversion using Height(double)

	Height bob(61);				// explicit conversion equivalent to bob = 61;
	Height boby = Height(62.7); // explicit conversion <M+>
	Height benn = (Height)63;	// explicit conversion <M+>

	Height charlie(6, 2.4);		// constructor
	Height david(4, 8);			// constructor: implicit conversion 8 -> 8.0

	// measurements -----------------------------------------------------------
	cout << "Alice  : ";
	alice.show_feet();
	cout << "Bob    : ";
	bob.show_feet();
	cout << "Charlie: ";
	charlie.show_feet();
	cout << "David  : ";
	david.show_feet();

	// measurements after 2 years ---------------------------------------------
	// re-assign
	alice = 70.9;

	// measurements
	cout << "\n*** -------------- After 2 Years -------------- ***\n";
	cout << "Alice  :\n";
	display(alice, 1);	// <- re-assigned
	cout << "Charlie:\n";
	display(77, 3);     // <- re-assign using implicit conversion

	return 0;
}

void display(const Height& height, int n)
{
	for (int i = 0; i < n; i++)
		height.show_feet();
}
