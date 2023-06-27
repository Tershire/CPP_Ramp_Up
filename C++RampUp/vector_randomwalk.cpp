// vector_randomwalk.cpp
// 2023 JUN 27
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <cstdlib> // rand(), srand()
#include <ctime> // time()
#include "vector.h"


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;
	// using namespace tervect;
	using tervect::Vector;

	// Setting ================================================================
	srand(time(0)); // random generator by time-based seed

	double direction;

	Vector step;
	Vector position;

	unsigned long num_steps = 0;
	double step_distance;
	double target_distance;

	ofstream f_out;
	f_out.open("randomwalk.txt");
	

	// Main ===================================================================
	cout << "Enter target distance: ";
	while (cin >> target_distance)
	{
		cout << "Enter step distance: ";
		if (!(cin >> step_distance))
			break;

		// randomwalk ---------------------------------------------------------
		while (position.mag() < target_distance)
		{
			direction = rand() % 360;

			step.set(step_distance, direction, Vector::POLA);
			position = position + step;
			
			num_steps++;
		}

		// print --------------------------------------------------------------
		cout << "----------------------------------------------------------\n";
		cout << "current position (RECT): " << position;
		position.pola_mode();
		cout << "                 (POLA): " << position
			 << "    after " << num_steps << " steps.\n";

		cout << "mean radial step distance: " 
			 << position.mag() / num_steps << endl;
		cout << "----------------------------------------------------------\n";

		// save data ----------------------------------------------------------
		f_out << position << endl;

		// initialization -----------------------------------------------------
		position.set(0.0, 0.0);
		num_steps = 0;

		cout << "Enter target distance: ";
	}

	cout << "Bye!\n";
	
	cin.clear();
	while (cin.get() != '\n')
		continue;

	f_out.close();

	return 0;
}
