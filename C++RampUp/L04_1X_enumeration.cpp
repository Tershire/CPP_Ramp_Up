// L04_1X_enumeration.cpp
// 2023 SEP 21
// Tershire


#include <iostream>


int main()
{
	enum Color
	{
		RED = -5,
		YELLOW,
		BLUE = 120
	};

	Color color = RED;

	// enum range & type cast
	color = Color(-6); // yes, should work
	color = Color(-8); // why works (?)
	
	color = Color(128); // why works (?)

	return 0;
}
