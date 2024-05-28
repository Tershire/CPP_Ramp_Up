// L05_08_block.cpp
// 2024 MAY 28
// Tershire


#include <iostream>


int main()
{
	using std::cout;
	using std::endl;

	int x = 7;
	{
		cout << "x: " << x << endl;

		int x = 100;

		cout << "x: " << x << endl;
	}
	cout << "x: " << x << endl;

	return 0;
}
