// L04_02_string.cpp
// 2023 MAY 16
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <cstring>

// CONSTANT ///////////////////////////////////////////////////////////////////
const int SIZE = 25;

// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// C-style string =========================================================
	char a[3] = { 'c', 'a', 't' };			// NOT string
	char b[4] = { 'd', 'o', 'g', '\0' };	//	   string

	cout << a << endl;
	cout << b << endl;

	// by ""
	char c[4] = "cat";	//      better
	char d[] = "dog";	// even better

	cout << c << endl;
	cout << d << endl;

	// user input -------------------------------------------------------------
	char name[SIZE];

	// strlen() only consider chars before \0
	cout << "\nYour name (>=3 letters): ";
	cin >> name;
	cout << "So, your name has " << strlen(name) << " letters...\n"
		 << "in fact, stored in an array of size: " << sizeof name
		 << " [byte].\n";
	
	name[3] = '\0';	// null character ('\0') is really a "cut" letter
	cout << "The first three letters are " << name << ".\n";

	return 0;
}
