// eva.h
// 2023 JUN 01
// Tershire

// DEFINITION /////////////////////////////////////////////////////////////////
#ifndef EVA_H_
#define EVA_H_


// HEADER FILE ////////////////////////////////////////////////////////////////
#include <string>


// CLASS //////////////////////////////////////////////////////////////////////
class Eva
{
	private:
		unsigned char id_;
		std::string pilot_;
		double synapse_voltage_;
		double sync_rate_;

		double get_sync_rate() {sync_rate_ = 15 * synapse_voltage_ + 3;} // [%]

	public:
		// constructor & destructor -------------------------------------------
		Eva();
		Eva(unsigned char id, const std::string& pilot, 
			double synapse_voltage);

		~Eva();

		// --------------------------------------------------------------------
		void display_status();
};

#endif
