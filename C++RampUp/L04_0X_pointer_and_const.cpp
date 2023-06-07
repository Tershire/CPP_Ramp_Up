// L04_0X_pointer_and_const.cpp
// 2023 JUN 07
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// [int*] Type Pointer ====================================================
	int a = 6;		// [int*] type pointer 
	int* p_a = &a;
	*p_a = 7;


	// [const int*] Type Pointer ==============================================
	// does not mean the variable must be const
	// just treat variable as const when passed on to the pointer

	int b = 6;				
	const int* p_b = &b;	
	b = 7;					// can do <R> b is not const
	//*p_b = 7;				// pointer is now involved and sees b as const 

	const int c = 7;		
	const int* p_c = &c;	
	//c = 8;			    // can't do <R> c is const
	//*p_c = 8;				// pointer is now involved and sees c as const

	p_c = p_b;				// pointer is modifiable


	// [int* const] Type Pointer ==============================================
	// pointer is const

	int d = 6;				
	int* const p_d = &d;	

	int e = 7;				
	int* p_e = &e;			
	e = 8;					// can do <R> e is not const
	*p_e = 8;				// can do <R> e is not const & pointer cares not
	
	//p_d = p_e				// pointer is not modifiable; it is const


	// [const int* const] Type Pointer ========================================
	// combinaiton of both

	int f = 6;
	const int* const p_f = &f;
	f = 7;					// can do <R> f is not const
	//*p_f = 7;				// pointer is now involved and sees f as const 

	const int g = 7;
	const int* p_g = &f;
	//g = 8;			    // can't do <R> g is const
	//*p_g = 8;				// pointer is now involved and sees g as const

	//p_f = p_g;			// pointer is not modifiable; it is const
	

	return 0;
}
