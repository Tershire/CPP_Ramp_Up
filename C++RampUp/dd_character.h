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
		std::string name_;
		int hit_points_;

		// void announce_death(); // for Inline Method usage
		void announce_death()
		{
			if (hit_points_ <= 0)
			{
				hit_points_ = 0;
				std::cout << "<!> Player Dead <!>\n";
			}
		}

	// Public =================================================================
	public:
		// constructor --------------------------------------------------------
		DD_Character();
		DD_Character(const std::string& name, int hit_points);

		// Destructor ---------------------------------------------------------
		~DD_Character();

		// --------------------------------------------------------------------
		void initialize(const std::string &name, int hit_points);

		int take_damage(int damage);		
};


// INLINE METHOD //////////////////////////////////////////////////////////////
//inline void DD_Character::announce_death()
//{
//	if (hit_points_ <= 0)
//	{
//		hit_points_ = 0;
//		std::cout << "<!> Player Dead <!>\n";
//	}
//}

#endif
