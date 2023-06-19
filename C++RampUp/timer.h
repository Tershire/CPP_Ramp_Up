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
		void show() const;
		
		// operator overloading
		Timer operator+(const Timer& other) const;
		Timer operator-(const Timer& other) const;
		Timer operator*(double k) const;

		// friend
		//friend Timer operator*(double k, const Timer& timer);

		friend Timer operator*(double k, const Timer& timer);

		friend std::ostream& operator<<(std::ostream& out_stream, 
			                            const Timer& timer);
};

#endif
