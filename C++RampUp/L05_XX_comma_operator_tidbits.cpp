// L05_XX_comma_operator_tidbits.cpp
// 2024 MAY 31
// Tershire


#include <iostream>


int main()
{
	// 1. A, B: A -> B
	int i, j;
	i = 7, j = 3 * i;
	std::cout << "i: " << i << ", j: " << j << std::endl;

	// 2. precedence
	int x;
	x = 17, 625;
	std::cout << "x: " << x << std::endl;
	(x = 17), 625;
	std::cout << "x: " << x << std::endl;
	x = (17, 625);
	std::cout << "x: " << x << std::endl;

	return 0;
}
