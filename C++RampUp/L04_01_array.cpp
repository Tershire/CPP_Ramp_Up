// L04_01_array.cpp
// 2023 MAY 16
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>

// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	int a[5] = {0, 1}; // rest of the elements are assigned to 0
	cout << a << endl;

	// length of an array: sizeof <arr> / sizeof <ele>
	for (int i = 0; i < sizeof a / sizeof (int); i++)
	{
		cout << a[i] << " ";
	}

	// automatic length detection: b assumed to be len 2
	short b[] = {0, 1};
	cout << endl << "sizeof b = " << sizeof b << endl;

	// C++11
	double c[7] {}; // all elements assigned to 0
	for (int i = 0; i < 7; i++)
	{
		cout << c[i] << " ";
	}

	return 0;
}
