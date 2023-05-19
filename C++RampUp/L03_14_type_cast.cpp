// L03_14_type_cast.cpp
// 2023 MAY 14
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>

// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	double amount = 17.235;
	long   num_packages_l;
	int	   num_packages;

	//
	num_packages = (int) amount; // C   Style
	num_packages = int (amount); // C++ Style
	cout << "number of packages        = " << num_packages   << endl;

	num_packages_l = static_cast<long> (amount);
	cout << "number of packages (long) = " << num_packages_l << endl;


	//
	char letter = 'A';
	cout << letter << " has ASCII value " << int(letter) << endl;

	return 0;
}
