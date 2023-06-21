// L04_1X_union.cpp
// 2023 JUN 21
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>


// EXTERNAL DECLARATION ///////////////////////////////////////////////////////
union Eva_ID
{
	char production_number;
	int  code;
	char serial[3];
} /* a; */;


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// Initialization =========================================================
	Eva_ID a_id;
	
	a_id.production_number = 7;
	
	char serial_a[3] = {'X', 8, 'a'};
	for (int i; i < 3; i++)
	{
		a_id.serial[i] = serial_a[i];
	}


	// Print ==================================================================


	return 0;
}
