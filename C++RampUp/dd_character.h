// dd_character.h
// 2023 MAY 25
// Tershire

// DEFINITION /////////////////////////////////////////////////////////////////
#ifndef DD_CHARACTER_H_
#define DD_CHARACTER_H_


// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>


// CLASS //////////////////////////////////////////////////////////////////////
class DD_Character
{
	// Private ================================================================
	private:
		std::string name;
		int hit_points;

		// void announce_death(); // for Inline Method usage
		void announce_death()
		{
			if (hit_points <= 0)
			{
				hit_points = 0;
				std::cout << "<!> Player Dead <!>\n";
			}
		}

	// Public =================================================================
	public:
		void initialize(const std::string& NAME, int initial_hit_points);

		int take_damage(int damage);		
};


// INLINE METHOD //////////////////////////////////////////////////////////////
//inline void DD_Character::announce_death()
//{
//	if (hit_points <= 0)
//	{
//		hit_points = 0;
//		std::cout << "<!> Player Dead <!>\n";
//	}
//}

#endif
