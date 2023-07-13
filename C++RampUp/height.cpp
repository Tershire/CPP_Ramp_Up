// height.cpp
// 2023 JUL 05
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "height.h"

using std::cout;


// CLASS DEFINITION ///////////////////////////////////////////////////////////
// Public Member Function =====================================================
// constructor & destructor ---------------------------------------------------
Height::Height()
{
	feet_           = 0;
	inch_remainder_ = 0;
	inch_           = 0;
}

Height::Height(int feet)
{
	feet_           = feet;
	inch_remainder_ = 0;
	inch_           = feet * INCH_PER_FEET;
}

Height::Height(double inch)
{
	feet_           = int(inch) / INCH_PER_FEET;
	inch_remainder_ = int(inch) % INCH_PER_FEET + (inch - int(inch));
	inch_ = inch;
}

Height::Height(int feet, double inch)
{
	feet_           = feet;
	inch_remainder_ = inch;
	inch_           = feet * INCH_PER_FEET + inch;
}

// ----------------------------------------------------------------------------
void Height::show_feet() const
{
	cout << feet_ << " feet " << inch_remainder_ << " inches\n";
}

void Height::show_inch() const
{
	cout << inch_ << " inches\n";
}

// conversion function --------------------------------------------------------
Height::operator double() const
{
	return inch_;
}

Height::operator int() const
{
	return int (inch_ + 0.5); // to round rather than truncate
}
