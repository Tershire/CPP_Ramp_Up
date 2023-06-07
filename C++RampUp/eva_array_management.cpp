// eva_array_management.cpp
// 2023 JUN 07
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "eva.h"


// GLOBAL CONSTANT ////////////////////////////////////////////////////////////
const int NUM_EVAS = 3;


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// Construct Eva Units ====================================================
	Eva evas[NUM_EVAS] =
	{
		Eva(00, "Ayanami", 2.6),
		Eva(01, "Ikari"  , 4.7),
		Eva(02, "Asuka"  , 3.9)
	};

	// Synchronize & Display Status ===========================================
	// <!> 
	// Eva eva;
	// eva = evas[i];
	// eva.sync();
	// above method do not update evas. Just eva only. -> use pointer instead

	Eva* p_eva;
	for (int i = 0; i < NUM_EVAS; i++)
	{
		p_eva = &evas[i];
		p_eva->sync();
		p_eva->display_status();
	}

	// update verification
	Eva eva;
	for (int i = 0; i < NUM_EVAS; i++)
	{
		eva = evas[i];
		eva.display_status();
	}

	// Find the Top Sync Rate =================================================
	// using pointer ----------------------------------------------------------
	const Eva* p_eva_top_sync = &evas[0];
	for (int i = 1; i < NUM_EVAS; i++)
	{
		p_eva_top_sync = &(p_eva_top_sync->max_sync(evas[i]));
	}

	cout << "Current Max Sync Rate is Achieved by:\n";
	p_eva_top_sync->display_status();

	// using reference --------------------------------------------------------
	// (reference embedded in function itself): is my implementation correct?
	Eva eva_top_sync = evas[0];
	for (int i = 1; i < NUM_EVAS; i++)
	{
		eva_top_sync = eva_top_sync.max_sync(evas[i]);
	}

	cout << "Current Max Sync Rate is Achieved by:\n";
	eva_top_sync.display_status();

	return 0;
}
