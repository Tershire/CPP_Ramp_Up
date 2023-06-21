// L04_11_structure.cpp
// 2023 JUN 20
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>


// EXTERNAL DECLARATION ///////////////////////////////////////////////////////
struct Eva
{
	unsigned char id_: 4; // Bit Field
	std::string pilot_;
	double synapse_voltage_;
} /* a; */ ;


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// Initialization =========================================================
	Eva a =
	{

	};

	Eva b =
	{
		99
	};

	Eva c =
	{
		100,
		"Canny",
		4.7
	};

	// list initialization
	Eva d{101, "Dorian"};

	Eva e{102, "Emma", 5.4};

	// copy (memberwise assignment)
	Eva f = e;


	// Array of struct ========================================================
	Eva evas[4] =
	{
		{103, "Fredrik"},
		{104, "Herman", 7.8},
		f
	};

	evas[3] = a;


	// Print ==================================================================
	cout << +a.id_ << " " << a.pilot_ << " " << a.synapse_voltage_ << endl;
	cout << +b.id_ << " " << b.pilot_ << " " << b.synapse_voltage_ << endl;
	cout << +c.id_ << " " << c.pilot_ << " " << c.synapse_voltage_ << endl;
	cout << +d.id_ << " " << d.pilot_ << " " << d.synapse_voltage_ << endl;
	cout << +e.id_ << " " << e.pilot_ << " " << e.synapse_voltage_ << endl;
	cout << +f.id_ << " " << f.pilot_ << " " << f.synapse_voltage_ << endl;

	cout << +evas[2].id_              << " "
		 <<  evas[2].pilot_           << " "
		 <<  evas[2].synapse_voltage_ << " " << endl;

	return 0;
}
