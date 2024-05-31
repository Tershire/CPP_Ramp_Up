// L05_09_reverse_a_string.cpp
// 2024 MAY 31
// Tershire


#include <iostream>


int main()
{
	std::string word = "stressed";
	char temp;
	int i, j;
	
	for (i = 0, j = word.size(); i < j; ++i, --j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}

	std::cout << "word: " << word << std::endl;

	return 0;
}
