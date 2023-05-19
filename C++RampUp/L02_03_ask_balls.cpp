// L02_03_ask_balls.cpp
// 2023 MAR 29
// Tershire

#include <iostream>

int main()
{
	using namespace std;

	int balls;

	cout << "Guess how many balls do I have?\n";
	
	// user input
	cin >> balls;
	
	cout << "No, I just got 1 more.\n";
	balls++;

	// conclusion
	cout << "So, I have " << balls << " balls.\n";

	return 0;
}
