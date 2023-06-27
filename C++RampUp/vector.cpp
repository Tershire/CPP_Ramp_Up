// vector.cpp
// 2023 JUN 26
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include "vector.h" // hence also include <iostream>
#include <cmath>

using std::cout;

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;


// CLASS DEFINITION ///////////////////////////////////////////////////////////
namespace tervect
{
	// Class Constant =========================================================
	const double RAD_TO_DEG = 45.0 / atan(1.0);

	// Private Member Function 
	void Vector::set_x()
	{
		x_ = mag_ * cos(ang_);
	}

	void Vector::set_y()
	{
		y_ = mag_ * sin(ang_);
	}

	void Vector::set_mag()
	{
		mag_ = sqrt(x_*x_ + y_*y_);
	}

	void Vector::set_ang()
	{
		if (x_ == 0.0 && y_ == 0.0)
			ang_ = 0.0;
		else
			ang_ = atan2(y_, x_);
	}
	

	// Public Member Function =================================================
	// constructor & destructor -----------------------------------------------
	Vector::Vector()
	{
		mode_ = RECT;

		x_ = y_ = mag_ = ang_ = 0.0;
	}

	Vector::Vector(double n1, double n2, Mode mode)
	{
		mode_ = mode;

		if (mode == RECT)
		{
			x_ = n1;
			y_ = n2;
			set_mag();
			set_ang();
		}
		else if (mode == POLA)
		{
			mag_ = n1;
			ang_ = n2 / RAD_TO_DEG;
			set_x();
			set_y();
		}
		else
		{
			cout << "<!> Incorrect mode <!> - "
				 << "vector set to 0\n";
			Vector(); // possible ?
		}
	}

	// ------------------------------------------------------------------------
	void Vector::set(double n1, double n2, Mode mode) 
	{
		mode_ = mode;

		if (mode == RECT)
		{
			x_ = n1;
			y_ = n2;
			set_mag();
			set_ang();
		}
		else if (mode == POLA)
		{
			mag_ = n1;
			ang_ = n2 / RAD_TO_DEG;
			set_x();
			set_y();
		}
		else
		{
			cout << "<!> Incorrect mode <!> - "
				<< "vector set to 0\n";
			mode_ = RECT;
			x_ = y_ = mag_ = ang_ = 0.0;
		}
	}

	void Vector::rect_mode()
	{
		mode_ = RECT;
	}

	void Vector::pola_mode()
	{
		mode_ = POLA;
	}

	// opterator overloading --------------------------------------------------
	Vector Vector::operator+(const Vector& other) const
	{
		return Vector(x_ + other.x_, y_ + other.y_);
	}

	Vector Vector::operator-(const Vector& other) const
	{
		return Vector(x_ - other.x_, y_ - other.y_);
	}

	Vector Vector::operator-() const
	{
		return Vector(-x_, -y_);
	}

	Vector Vector::operator*(const double n) const
	{
		return Vector(n * x_, n * y_);
	}

	// Friend =================================================================
	// opterator overloading --------------------------------------------------
	Vector operator*(const double n, const Vector& other)
	{
		return other * n;
	}

	// output -----------------------------------------------------------------
	std::ostream& operator<<(std::ostream& out_stream,
						     const Vector& vector)
	{
		if (vector.mode_ == Vector::RECT)
		{
			out_stream << "(x, y) = (" << vector.x_ << ", "
				                       << vector.y_ << ")\n";
		}
		else if (vector.mode_ == Vector::POLA)
		{
			out_stream << "(mag, ang) = (" << vector.mag_ << ", "
				                           << vector.ang_ << ")\n";
		}
		else
			out_stream << "Vector object is invalid!";
		
		return out_stream;
	}
}
