// human.h
// 2023 JUL 14
// Tershire


#ifndef TERSHIRE_HUMAN_H
#define TERSHIRE_HUMAN_H

#include "eye.h"
#include "ear.h"


namespace tershire
{

class Human
{
public:
	// constructor & destructor -----------------------------------------------
	Human();

private:
	// constant ---------------------------------------------------------------
	// symbolic constants in class scope 
	enum: int {NUM_EYES = 2};		 // <M1> enum (with underlying type: short)
	static const short NUM_EARS = 2; // <M2> static (can remove static?)

	// ------------------------------------------------------------------------
	Eye eyes[NUM_EYES];
	Ear ears[NUM_EARS];

	// scoped enum ------------------------------------------------------------
	enum class  Eye_Size        {SMALL, MEDIUM, LARGE, EXTRA_LARGE};
		// ^ underlying type: compiler implementation-dependent
	enum struct Ear_Size: short {SMALL, MEDIUM, LARGE};

	// field ------------------------------------------------------------------ 
	// Eye_Size eye_size = LARGE; // no
	Eye_Size EYE_SIZE = Eye_Size::LARGE;
	Ear_Size EAR_SIZE = Ear_Size::MEDIUM;
};

} // namespace tershire

#endif // TERSHIRE_HUMAN_H
