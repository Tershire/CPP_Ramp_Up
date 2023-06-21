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

struct Eva
{
	union Eva_ID id_;
	std::string pilot_;
	double synapse_voltage_;
};

struct Eva_V
{
	// anonymous union
	union
	{
		char production_number;
		int  code;
		char serial[3];
	};
	std::string pilot_;
	double synapse_voltage_;
};


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// Initialization =========================================================
	Eva_ID a_id;
	
	// set union to char
	a_id.code = 7;
	cout << a_id.code << endl;
	
	// set union to char array
	char serial_a[3] = {'X', 'V', 'a'};
	for (int i = 0; i < 3; i++)
	{
		a_id.serial[i] = serial_a[i];
	}
	cout << a_id.serial << endl;


	// USE WITH CLASS =========================================================
	Eva a{0, "Adam", 3.1}; // how does it work?
	a.id_.code = 101;
	cout << a.id_.code << " " << a.pilot_ << " " << a.synapse_voltage_ << endl;

	// anonymous union
	Eva_V b{0, "Beatrice", 2.4}; // how does it work?
	char serial_b[3] = { 'X', 'V', 'b' };
	for (int i = 0; i < 3; i++)
	{
		b.serial[i] = serial_b[i];
	}
	cout << b.serial << " " << b.pilot_ << " " << b.synapse_voltage_ << endl;

	return 0;
}
