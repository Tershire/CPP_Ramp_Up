// eva.cpp
// 2023 JUN 02
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "eva.h"


// CONSTRUCTOR & DESTRUCTOR ///////////////////////////////////////////////////
// Constructor ================================================================
Eva::Eva() // default
{
	id_ = 0;
	pilot_ = "Anonym";
	synapse_voltage_ = 0.0;
	sync_rate_ = 0.0;

	// unary + operator works too <B> dependent on compiler -> static_cast<>()
	// std::cout << "<!> Constructed (default) EVA-" << +id_ << std::endl;
	std::cout << "<!> Constructed (default) EVA-" << static_cast<int>(id_) 
		      << std::endl;
}

Eva::Eva(unsigned char id, const std::string& pilot, double synapse_voltage)
{
	id_ = id;
	if (pilot == "") {pilot_ = "Anonym";}
	else {pilot_ = pilot;}
	synapse_voltage_ = synapse_voltage;

	std::cout << "<!> Constructed EVA-" << static_cast<int>(id_) << std::endl;
}

// Destructor =================================================================
Eva::~Eva()
{
	std::cout << "<!> Destructed  EVA-" << static_cast<int>(id_) << std::endl;
}


// PUBLIC MEMBER FUNCTION /////////////////////////////////////////////////////
void Eva::display_status() const
{
	using namespace std;

	cout << "______________________________________________________________\n"
		 << "EVA-" << static_cast<int>(id_)           << endl
		 << "Pilot          : " << pilot_             << endl
		 << "Synapse Voltage: " << synapse_voltage_   << endl
		 << "Sync Rate      : " << sync_rate_ << " %" << endl;
		 
	if (sync_rate_ <= 0)
	{
		cout << "<!> Cannot synchronize Eva to pilot <!>\n";
	}
	cout << "______________________________________________________________\n";
}

bool Eva::sync()
{
	sync_rate_ = get_sync_rate();

	if (sync_rate_ <= 0) {return false;}
	else {return true;}
}

const Eva& Eva::max_sync(const Eva& other) const // hard to understand
{
	std::cout << "Sync rate: " <<       sync_rate_ << " % for "
		      << "pilot: "     <<       pilot_ << std::endl;
	std::cout << "Sync rate: " << other.sync_rate_ << " % for "
		      << "pilot: "     << other.pilot_ << std::endl;

	if (other.sync_rate_ > sync_rate_)
		return other;
	else 
		return *this;
}
