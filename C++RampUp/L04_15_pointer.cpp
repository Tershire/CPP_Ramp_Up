// L04_15_pointer.cpp
// 2023 JUN 04
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;


	// Fundamental ============================================================
	int a = 6;
	int* p_a = &a; // int*: int pointer

	cout << "Value   of a: " <<  a << " == " << *p_a << endl;
	cout << "Address of a: " << &a << " == " <<  p_a << endl;


	// <!> DANGER <!> =========================================================
	int* p_b;
	//*p_b = 178; // C6001: using uninitialized memory 'p_b'

	// must assign legitimate address to p_b before using *p_b
	int b = *p_a + 1;
	p_b = &b;

	cout << "Value   of b: " << *p_b << endl;
	cout << "Address of b: " <<  p_b << endl;


	// Pointer =/= int ========================================================
	int* p_c;
	//p_c = 0xB8000000; // not allowed
	p_c = (int*) 0xB8000000;

	cout << "p_c refers address: " << p_c << endl;

	return 0;
}
