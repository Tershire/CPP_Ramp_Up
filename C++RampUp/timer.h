// Timer.h
// 2023 JUN 11
// Tershire

// DEFINITION /////////////////////////////////////////////////////////////////
#ifndef TIMER_H_
#define TIMER_H_


// CLASS //////////////////////////////////////////////////////////////////////
class Timer
{
	private:
		int hour_;
		int minute_;

	public:
		// constructor & destructor -------------------------------------------
		Timer();
		Timer(int hour, int minute);

		// --------------------------------------------------------------------
		void reset();
		void show();
		
		// operator overloading
		Timer operator+(const Timer& other);
		Timer operator-(const Timer& other);
		Timer operator*(double k);

		// friend
		//friend Timer operator*(double k, const Timer& timer);

		friend Timer operator*(double k, const Timer& timer);
};

#endif
