// dd_character.cpp
// 2023 MAY 25
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "dd_character.h"


// CONSTRUCTOR ////////////////////////////////////////////////////////////////
DD_Character::DD_Character() // default
{
	name_ = "Anonym";
	hit_points_ = 1;

	std::cout << "============================================\n";
	std::cout << "<!> Constructed (default) <!> " << name_ << std::endl;
}

// Java style constructor chaining not working for C++<11
//DD_Character::DD_Character(const std::string &name)
//{
//	DD_Character::DD_Character(name, 1)
//}

DD_Character::DD_Character(const std::string& name, int hit_points)
{
	if (name == "")
	{
		name_ = "Anonym";
	}
	name_ = name;
	hit_points_ = hit_points;

	std::cout << "============================================\n";
	std::cout << "<!> Constructed <!> " << name_ << std::endl;
}


// DESTRUCTOR /////////////////////////////////////////////////////////////////
DD_Character::~DD_Character()
{
	std::cout << "============================================\n";
	std::cout << "<!> Destructed <!> " << name_ << std::endl;
}


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
	cout << "____________________________________________\n";
	cout << name_ << " lost " << damage << " hit points!!\n";
	
	announce_death();

	return hit_points_;
}
