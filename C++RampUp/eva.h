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

		double get_sync_rate() {return sync_rate_ = 15 * synapse_voltage_ + 3;} 
		// [%]

	public:
		// constructor & destructor -------------------------------------------
		Eva();
		Eva(unsigned char id, const std::string& pilot="Anonym",
			double synapse_voltage=0.0);

		~Eva();

		// --------------------------------------------------------------------
		void display_status() const; // promise not to modify the obj.
		bool sync();

		// return reference [Eva&] (not copy usually returned by 'return')
		// of object Eva which has the max sync_rate
		// (const ...) promises that max_sync() will not modify the
		//             EXPLICITELY accessed obj.
		// ...) const  promises that max_sync() will not modify the
		//             IMPLICITELY accessed obj. [this]
		// const Eva&  has to be const <R> returned obj. will be const
		const Eva& max_sync(const Eva& other) const;
};

#endif
