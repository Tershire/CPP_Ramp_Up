// L03_0X_wchar_t_test.cpp
// 2023 APR 22
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>

// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	cout << "char: "    << sizeof( 'A') << " "
		 << "wchar_t: " << sizeof(L'A') << endl;

	cout << "char string: "    << sizeof( "AZ") << " "
		 << "wchar_t string: " << sizeof(L"AZ") << endl;

	return 0;
}