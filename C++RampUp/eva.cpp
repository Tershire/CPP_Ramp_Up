// dd_character.cpp
// 2023 JUN 02
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "eva.h"


// CONSTRUCTOR & DESTRUCTOR ///////////////////////////////////////////////////
// Constructor ================================================================
Eva::Eva() // default
{
	pilot_ = "Anonym";
	synapse_voltage_ = 0;

	std::cout << "<!> Constructed (default) EVA-" << id_ << std::endl;
}

Eva::Eva(unsigned char id, const std::string& pilot, double synapse_voltage)
{
	if (pilot == "")
	{
		pilot_ = "Anonym";
	}
	pilot_ = pilot;
	synapse_voltage_ = synapse_voltage;

	std::cout << "<!> Constructed EVA-" << id_ << std::endl;
}

// Destructor =================================================================
Eva::~Eva()
{
	std::cout << "<!> Destructed EVA-" << id_ << std::endl;
}


// CLASS MEMBER FUNCTION //////////////////////////////////////////////////////
void Eva::display_status()
{
	using namespace std;

	cout << "______________________________________________________________\n"
		 << "EVA-" << id_ << endl
		 << "Pilot          : " << pilot_ << endl
		 << "Synapse Voltage: " << synapse_voltage_ << endl
		 << "Sync Rate      : " << sync_rate_ << endl
		 << "______________________________________________________________\n";
}
