// Vector.h
// 2023 JUN 26
// Tershire

// DEFINITION /////////////////////////////////////////////////////////////////
#ifndef VECTOR_H_
#define VECTOR_H_


// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>


// CLASS //////////////////////////////////////////////////////////////////////
namespace tervect
{
	class Vector
	{
		// state member -------------------------------------------------------
		public:
			enum Mode
			{
				RECT, // rectangular coordinate
				POLA  // polar       coordinate
			};
	
		private:
			// field ----------------------------------------------------------
			Mode mode_;

			double x_;
			double y_;

			double mag_;
			double ang_;

			// function -------------------------------------------------------
			void set_x();
			void set_y();
			void set_mag();
			void set_ang();

		public:
			// constructor & destructor ---------------------------------------
			Vector();
			Vector(double n1, double n2, Mode mode=RECT);

			// ----------------------------------------------------------------
			void set(double n1, double n2, Mode mode=RECT);

			double x() const {return x_;} // report x
			double y() const {return y_;} // report y
			double mag() const {return mag_;} // report mag
			double ang() const {return ang_;} // report ang

			void rect_mode(); // set mode to RECT
			void pola_mode(); // set mode to POLA

			// operator overloading -------------------------------------------
			Vector operator+(const Vector& other) const;
			Vector operator-(const Vector& other) const;
			Vector operator-() const; // unary -
			Vector operator*(const double n) const;

			// friend ---------------------------------------------------------
			friend Vector operator*(const double n, const Vector& other);

			friend std::ostream& operator<<(std::ostream& out_stream,
				                            const Vector& vector);
	};
}

#endif
