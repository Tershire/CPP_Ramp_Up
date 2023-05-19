// L04_03_get_user_string.cpp
// 2023 MAY 19
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <cstring>


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// CONSTANT ===============================================================
	const int SIZE = 25;
	char name[SIZE];
	char song[SIZE];

	// MAIN ===================================================================
	cout << "Name: ";
	// cin.get(name, SIZE); // \n passed onto cin.getline and program finishes
	cin.get(name, SIZE).get();

	cout << "Song: ";
	cin.getline(song, SIZE);

	return 0;
}
