// timer.cpp
// 2023 JUN 11
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include "timer.h"


// CONSTRUCTOR & DESTRUCTOR ///////////////////////////////////////////////////
Timer::Timer()
{
	hour_   = 0;
	minute_ = 0;
}

Timer::Timer(int hour, int minute)
{
	hour_   = hour;
	minute_ = minute;
}


// PUBLIC MEMBER FUNCTION /////////////////////////////////////////////////////
void Timer::reset()
{
	hour_   = 0;
	minute_ = 0;
}

void Timer::show() const
{
	std::cout << hour_ << " hours " << minute_ << " minutes\n";
}


// opterator overloading ------------------------------------------------------
Timer Timer::operator+(const Timer& other) const // can't return ref.
												 // <R> destructed out {}
{
	Timer sum;
	
	sum.minute_ = minute_ + other.minute_;

	sum.hour_ = hour_ + other.hour_ + sum.minute_ / 60;
	sum.minute_ %= 60;

	return sum;
}

Timer Timer::operator-(const Timer& other) const
{
	Timer diff;

	int total_min_this, total_min_other;
	total_min_this  =       hour_ * 60 +       minute_;
	total_min_other = other.hour_ * 60 + other.minute_;

	diff.hour_   = (total_min_this - total_min_other) / 60;
	diff.minute_ = (total_min_this - total_min_other) % 60;

	return diff;
}

Timer Timer::operator*(double k) const
{
	Timer total_time;

	long total_min = k * (hour_ * 60 + minute_);

	total_time.hour_   = total_min / 60;
	total_time.minute_ = total_min % 60;

	return total_time;
}

// Friend =====================================================================
// opterator overloading ------------------------------------------------------
//Timer operator*(double k, const Timer& timer)
//{
//	Timer total_time;
//
//	long total_min = k * (timer.hour_ * 60 + timer.minute_);
//
//	total_time.hour_   = total_min / 60;
//	total_time.minute_ = total_min % 60;
//
//	return total_time;
//}

Timer operator*(double k, const Timer& timer)
{
	return timer * k;
}

std::ostream& operator<<(std::ostream& out_stream, const Timer& timer)
{
	out_stream << timer.hour_ << " hours " << timer.minute_ << " minutes";

	return out_stream;
}
