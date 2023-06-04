// L04_08_string_operations.cpp
// 2023 MAY 24
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>


// GLOBAL CONSTANT ////////////////////////////////////////////////////////////
const int SIZE = 70;


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// Initialization =========================================================
	char str_c[SIZE];
	char str_c_1[SIZE] = {'c', 'a', 't', '\0'};
	char str_c_2[]     = {'o', 'x', '\0'}; // auto length
	char str_c_3[]{"leopard"}; // C++11 list initialization

	string str;
	string str_1 = "apple";
	string str_2 = "kiwi";
	string str_3{"watermellon"}; // C++11 list initialization

	// Operation ==============================================================
	// copy -------------------------------------------------------------------
	strcpy_s(str_c, str_c_1); // two string must have the same size
	cout << "str_c: " << str_c << endl;

	str = str_1;
	cout << "str: " << str << endl;

	// concatenation ----------------------------------------------------------
	strcat_s(str_c_1, str_c_2);
	cout << "str_c_1: " << str_c_1 << " with strlen: " << strlen(str_c_1) 
		 << endl; // strlen()

	str = str_1 + str_2;
	cout << "str: " << str << " with .size: " << str.size() 
		 << endl; // .size()

	// IO =====================================================================
	cout << "Type what you want to say: ";
	cin.getline(str_c, SIZE + 1); // +1 just to see if SIZE can be modified
	cout << "You said: " << str_c << " (length: " << strlen(str_c) << ")"  
		 << endl;

	cout << "Type what you want to say: ";
	getline(cin, str);
	cout << "You said: " << str << " (length: " << str.size() << ")"
		<< endl;

	return 0;
}
