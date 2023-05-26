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

	DD_Character tershire;

	tershire.initialize("Tershire", 9);
	cout << "Remaining hit points: " << tershire.take_damage(2) << endl;
	cout << "Remaining hit points: " << tershire.take_damage(8) << endl;

	return 0;
}
