// L03_06_char.cpp
// 2023 APR 09
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <climits>

// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// cout | cin auto conversion
	char ch = 'A';
	int   i = ch;
	cout << "ASCII for " << ch << " is " << i << endl;

	// add one
	ch += 1;
	i = ch;
	cout << "ASCII for " << ch << " is " << i << endl;

	// cout.put()
	cout.put(ch);
	cout.put('!') << endl;

	return 0;
}
