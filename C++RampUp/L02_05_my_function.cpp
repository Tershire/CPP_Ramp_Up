// L02_05_my_function.cpp
// 2023 APR 04
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>

// PROTOTYPE //////////////////////////////////////////////////////////////////
void my_function(int);

int main()
{
	using namespace std;
	
	cout << "how many balls do you have?: ";
	
	int balls;
	cin >> balls;

	my_function(balls);

	return 0;
}

// USER FUNCTION DEFINITION ///////////////////////////////////////////////////
void my_function(int balls)
{
	std::cout << "I can give you one more\n";
	balls += 1;
	std::cout << "now you have " << balls << " balls\n";
}
