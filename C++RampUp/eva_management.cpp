// eva_management.cpp
// 2023 JUN 02
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "eva.h"


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// C+11 List Initialization & More! ---------------------------------------
	Eva a{};
	
	Eva b{99};
	b = 99; // possible for one-argument constructor -> may cause problems

	Eva c{100, "Canny", 4.7};
	c.sync();
	c.display_status();

	// Re-Assign --------------------------------------------------------------
	Eva d = {101, "", 3.6};
	d = Eva(101, "Dorian", 3.9);
	d.sync();
	d.display_status();
	
	// const Object & const Function ------------------------------------------
	const Eva e = {102, "Emma", 5.4};
	// can't sync since sync() is not static
	e.display_status();

	// const Function ---------------------------------------------------------
	Eva f = {103, "Fredrik", 2.1};
	f.display_status();

	// Dynamic Storage Object -------------------------------------------------
	Eva* g = new Eva; // default

	Eva* h = new Eva(104, "Herman", 7.8);
	h->sync();
	h->display_status();

	Eva* l = new Eva{105}; // with list initialization

	// destructor for dyn. storage obj.
	delete g;
	delete h;
	delete l;

	// this: comparing Eva objects --------------------------------------------
	Eva s = c.max_sync(d); // ? why I dont't have to do: const Eva s
	cout << "Current Max Sync Rate is Achieved by:\n";
	s.display_status();

	return 0;
}
