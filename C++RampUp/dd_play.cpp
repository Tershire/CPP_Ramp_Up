// dd_play.cpp
// 2023 MAY 25
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "dd_character.h"


// MAIN ///////////////////////////////////////////////////////////////////////
// ============================================================================
int main()
{
	using namespace std;

	DD_Character tershire; // default constructor
	DD_Character patricia_1("Patricia_1", 11);				 // method 1
	DD_Character patricia_2 = DD_Character("Patricia_2", 7); // method 2
	// for method 2, can be 2 behaviors depending on the compiler
	// 1) just like method 1
	// 2) create temp. obj., overwrite, discarded

	tershire.initialize("Tershire", 9); // set
	cout << "Remaining hit points: " << tershire.take_damage(2) << endl;
	cout << "Remaining hit points: " << tershire.take_damage(8) << endl;

	// re-assign member data
	tershire = DD_Character("Tershire", 3);
	// create temp. obj., overwrite, discarded

	// assign obj. to obj. (overwrite member data)
	patricia_1 = patricia_2; // Patricia_1 is overwritten by Patricia_2
	// create temp. obj., overwrite, discarded (discard might be delayed)
	
	cout << "Patricia_1 " << "has " << patricia_1.take_damage(3) 
		 << " hit points\n";
	
	return 0;
}
