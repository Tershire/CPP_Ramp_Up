// timer_management.cpp
// 2023 JUN 11
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "timer.h"


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	Timer studying(3, 57);
	Timer working_out(1, 15);
	Timer socializing(2, 3);

	// <M1>
	Timer sum = studying + working_out;
	sum.show();

	// <M2>
	sum = studying.operator+(working_out);
	sum.show();

	// successive
	sum = studying + working_out + socializing;
	sum.show();

	//
	Timer diff = studying - working_out;
	diff.show();

	Timer total_time = working_out * 7;
	total_time.show();

	return 0;
}
