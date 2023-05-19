// L03_0X_char_t_test.cpp
// 2023 APR 22
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>

// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// char
	cout << "============\n";
	cout << 'A' << endl;
	cout << 'ö' << endl;

	// wchar_t
	cout << "============\n";
	 cout << L'A' << endl;
	wcout << L'A' << endl;
	 cout << L'ö' << endl;
	wcout << L'ö' << endl;

	// char16_t
	cout << "============\n";
	cout << u'\u00F6' << endl;
	cout << u'ö'      << endl;

	// char32_t
	cout << "============\n";
	cout << U'\U000000F6' << endl;
	cout << U'ö'          << endl;

	return 0;
}