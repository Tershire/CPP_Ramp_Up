// dd_character.cpp
// 2023 MAY 25
// Tershire


// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "dd_character.h"


// CLASS MEMBER FUNCTIONS /////////////////////////////////////////////////////
// ============================================================================
void DD_Character::initialize(const std::string &NAME, int initial_hit_points)
{
	name = NAME; // name = name does not work
	hit_points = initial_hit_points;

	std::cout << "Character: " << name << " starts with " 
		      << hit_points << " hit points.\n";
}

// ============================================================================
int DD_Character::take_damage(int damage)
{
	using std::cout;

	hit_points -= damage;
	cout << "___________________________________________\n";
	cout << name << " lost " << damage << " hit points!!\n";
	
	announce_death();

	return hit_points;
}
