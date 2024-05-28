// L05_XX_pointer_increment_decrement.cpp
// 2024 MAY 28
// Tershire


#include <iostream>


int main()
{
	int x[5] = {1, 7, 13, 19, 25};

	int* p_x;
	int n;

	// 1.
	p_x = x;
	std::cout << "[1.] p_x: " << p_x << std::endl;
	n = *++p_x;
	std::cout << "[1.] p_x: " << p_x << ", n: " << n << std::endl;

	// 2.
	p_x = x;
	std::cout << "[2.] p_x: " << p_x << std::endl;
	n = ++*p_x;
	std::cout << "[2.] p_x: " << p_x << ", n: " << n << std::endl;

	// 3.
	p_x = x;
	std::cout << "[3.] p_x: " << p_x << std::endl;
	n = (*p_x)++;
	std::cout << "[3.] p_x: " << p_x << ", n: " << n << std::endl;

	// 4. (?)
	p_x = x;
	std::cout << "[4.] p_x: " << p_x << std::endl;
	n = *p_x++;
	std::cout << "[4.] p_x: " << p_x << ", n: " << n << std::endl;

	return 0;
}
