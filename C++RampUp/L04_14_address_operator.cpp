// L04_14_address_operator.cpp
// 2023 JUN 04
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	int	int1 = 7;
	double double1 = 1.2;
	int int2 = 9;

	cout << "int1: " << int1 << " is @ " << &int1 << endl;
	cout << "int1: " << double1 << " is @ " << &double1 << endl;
	cout << "int2: " << int2 << " is @ " << &int2 << endl;

	return 0;
}
