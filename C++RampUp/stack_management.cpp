// stack_management.cpp
// 2023 JUL 15
// Tershire


#include <iostream>

#include "stack.h"

using namespace tershire;


int main()
{
	Stack stack;
	unsigned long phone_number;

	char ch;
	std::cout << "Please enter 'A' to push a phone number\n"
		      << "             'B' to pop  a phone number\n"
	          << "             'Q' to quit application\n";
	while (std::cin >> ch && toupper(ch) != 'Q')
	{
		// ignore rest of the code until user hit enter -> right?
		while (std::cin.get() != '\n')
			continue;

		// beep if ch is not an alphabet
		if (!isalpha(ch))
		{
			std::cout << '\a';
			continue;
		}

		switch (toupper(ch))
		{
		case 'A':
			std::cout << "Enter a phone number to push: ";
			std::cin >> phone_number;
			if (stack.is_full())
				std::cout << "Error: Stack is full\n";
			else
				stack.push(phone_number);
			std::cout << "Phone Number: " << phone_number << " pushed.\n";

			break;

		case 'B':
			if (stack.is_empty())
				std::cout << "Error: Stack is empty\n";
			else
			{
				stack.pop(phone_number);
				std::cout << "Phone Number: " << phone_number << " popped.\n";
			}

			break;		
		}
		//std::cout << "Please enter 'A' to push a phone number\n"
		//		  << "             'B' to pop  a phone number\n"
		//		  << "             'Q' to quit application\n";
	}
	std::cout << "Application quit...\n";
	return 0;
}
