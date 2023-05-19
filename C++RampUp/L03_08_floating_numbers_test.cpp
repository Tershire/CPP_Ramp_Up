// L03_08_floating_numbers_test.cpp
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

	float  num_f = 10.0 / 3.0;	// good to  ~6 places
	double num_d = 10.0 / 3.0;	// good to ~15 places

	cout << "num_f             = " << num_f               << endl;
	cout << "num_f * 1e6F      = " << num_f * 1.0e6F      << endl;
	cout << "num_f * 1e6F * 10 = " << num_f * 1.0e6F * 10 << endl;

	cout << "num_d             = " << num_d               << endl;
	cout << "num_d * 1e6F      = " << num_d * 1.0e6F      << endl;
	cout << "num_d * 1e6F * 10 = " << num_d * 1.0e6F * 10 << endl;

	return 0;
}
