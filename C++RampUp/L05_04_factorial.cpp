// L05_04_factorial.cpp
// 2023 SEP 21
// Tershire


#include <iostream>


const int SIZE = 16;

int main()
{
	long long factorials[SIZE];

	factorials[0] = factorials[1] = 1LL;

	for (int i = 2; i < SIZE; ++i)
	{
		factorials[i] = i * factorials[i - 1];
	}

	for (int i = 0; i < SIZE; ++i)
		std::cout << i << "! = " << factorials[i] << std::endl;

	return 0;
}
