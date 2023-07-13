// height.h
// 2023 JUL 05
// Tershire

// DEFINITION /////////////////////////////////////////////////////////////////
#ifndef HEIGHT_H_
#define HEIGHT_H_


// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>


// CLASS //////////////////////////////////////////////////////////////////////
class Height
{
private:
	enum {INCH_PER_FEET = 12};
	
	int    feet_;
	double inch_remainder_;
	double inch_;
	

public:
	// constructor & destructor -----------------------------------------------
	Height();
	explicit Height(int feet);			// approximate height only
	// explicit Height(double inch);	// only type casts will work (explicit)
	Height(double inch);
	Height(int feet, double inch);

	// ------------------------------------------------------------------------
	void show_feet() const;
	void show_inch() const;

	// conversion function ----------------------------------------------------
	         operator double() const;
	explicit operator	 int() const;
};

#endif
