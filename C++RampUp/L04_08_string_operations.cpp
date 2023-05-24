// L04_08_string_operations.cpp
// 2023 MAY 24
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>


// GLOBAL CONSTANT ////////////////////////////////////////////////////////////
const int SIZE = 25;


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// Initialization =========================================================
	char str_c[SIZE];
	char str_c_1[SIZE] = {'c', 'a', 't', '\0'};
	char str_c_2[SIZE] = {'d', 'o', 'g', '\0'};

	string str;
	string str_1 = "apple";
	string str_2 = "lemon";

	// Operation ==============================================================
	// copy -------------------------------------------------------------------
	strcpy_s(str_c, str_c_1);
	cout << "str_c: " << str_c << endl;

	str = str_1;
	cout << "str: " << str << endl;

	// concatenation ----------------------------------------------------------
	strcat_s(str_c_1, str_c_2);
	cout << "str_c_1: " << str_c_1 << endl;

	str = str_1 + str_2;
	cout << "str: " << str << endl;

	return 0;
}
