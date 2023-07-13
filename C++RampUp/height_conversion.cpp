// height_conversion.cpp
// 2023 JUL 11
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "height.h"


// PROTOTYPE //////////////////////////////////////////////////////////////////
void display(const Height& height, int n);


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	// initiation -------------------------------------------------------------
	Height alice = 69.3;
	Height bobby = 69.7;

	// measurements -----------------------------------------------------------
	// double a = alice;	// not working
	double a_double = double (alice);
	int    a_int    = int    (alice);
	int    b_int    = int    (bobby);

	//
	std::cout << a_double << std::endl;
	std::cout << a_int    << std::endl;
	std::cout << b_int	  << std::endl;

	return 0;
}

