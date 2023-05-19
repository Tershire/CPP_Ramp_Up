// L03_09_float_problem.cpp
// 2023 MAY 04
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>

// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// force output to be in fixed-point notation
	cout.setf(ios_base::fixed, ios_base::floatfield);

	float a = 1.23e6F;
	float b = a + 1.0f;
	
	float x = 1.23e8F;
	float c = x + 1.0f;

	cout << "a = "     << a     << endl;
	cout << "b = "     << b     << endl;
	cout << "b - a = " << b - a << endl;

	cout << "x = "     << x     << endl;
	cout << "c = "     << c     << endl;
	cout << "x - c = " << c - x << endl;

	return 0;
}
