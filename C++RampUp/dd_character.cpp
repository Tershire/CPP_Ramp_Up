// dd_character.cpp
// 2023 MAY 25
// Tershire


// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "dd_character.h"


// CLASS MEMBER FUNCTIONS /////////////////////////////////////////////////////
// ============================================================================
void DD_Character::initialize(const std::string &name, int hit_points)
{
	name_ = name; // name = name does not work
	hit_points_ = hit_points;

	std::cout << "Character: " << name_ << " starts with " 
		      << hit_points_ << " hit points.\n";
}

// ============================================================================
int DD_Character::take_damage(int damage)
{
	using std::cout;

	hit_points_ -= damage;
	cout << "___________________________________________\n";
	cout << name_ << " lost " << damage << " hit points!!\n";
	
	announce_death();

	return hit_points_;
}
