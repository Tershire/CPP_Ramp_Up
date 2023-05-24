// L04_07_string_class.cpp
// 2023 MAY 24
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// Initialization =========================================================
	char   str_c[25] = { 'd', 'o', 'g', '\0' };
	str_c[1] = 'a';
	cout << "str_c: " << str_c << endl;

	string str; // empty string assigned
	cout << "str: " << str << endl;

	// string other_str = {"list initialization"}
	
	// assign for string class ------------------------------------------------
	str = "dog";
	cout << "str: " << str << endl;

	str = str_c; // can assign cstring to string object
	cout << "str: " << str << endl;


	// User Input =============================================================
	cout << "Name: ";
	cin >> str;

	cout << "First letter is " << str[0] << endl;
	
	return 0;
}
