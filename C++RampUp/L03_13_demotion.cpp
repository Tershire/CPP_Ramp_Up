// L03_13_demotion.cpp
// 2023 MAY 14
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <climits>

// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	double num_d = INT_MAX;
	int	   num_i;

	cout << "num_d = " << num_d << endl;

	// double -> int ==========================================================
	// loss of precision
	num_i = num_d + 0.1;
	cout << "num_i = " << num_i << endl; // -> decimal points lost

	// overflow
	num_i = num_d + 1;
	cout << "num_i = " << num_i << endl; // -> looping around

	// can't hold? random? or just overflow?
	num_i = 2e14;
	cout << "num_i = " << num_i << endl; // -> ?

	return 0;
}
