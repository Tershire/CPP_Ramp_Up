// L03_01_limits.cpp
// 2023 APR 08
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <climits>
#include <cfloat>

// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// TYPE: int ==============================================================
	// C++ 1 [byte] width
	cout << "------------------------------------\n";
	cout << "1 [byte] = " << CHAR_BIT << endl;

	// limit in [byte]
	cout << "------------------------------------\n";
	cout << "sizeof (short)    : " << sizeof(short)     << " [byte]\n"
		 << "sizeof (int)      : " << sizeof(int)       << " [byte]\n"
		 << "sizeof (long)     : " << sizeof(long)      << " [byte]\n"
		 << "sizeof (long long): " << sizeof(long long) << " [byte]\n";

	// limit in number
	cout << "------------------------------------\n";
	cout << " SHRT_MAX: " << SHRT_MAX  << endl
		 << "  INT_MAX: " << INT_MAX   << endl
		 << " LONG_MAX: " << LONG_MAX  << endl
		 << "LLONG_MAX: " << LLONG_MAX << endl;

	// TYPE: floating-point ======================================================
	// limit in [byte]
	cout << "------------------------------------\n";
	cout << "sizeof (float)      : " << sizeof(float)       << " [byte]\n"
		 << "sizeof (double)     : " << sizeof(double)      << " [byte]\n"
		 << "sizeof (long double): " << sizeof(long double) << " [byte]\n";

	return 0;
}
