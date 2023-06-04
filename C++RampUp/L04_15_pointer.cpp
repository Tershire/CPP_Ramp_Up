// L04_15_pointer.cpp
// 2023 JUN 04
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	int a = 6;
	int* p_a = &a; // int*: int pointer

	cout << "Value   of a: " <<  a << " == " << *p_a << endl;
	cout << "Address of a: " << &a << " == " <<  p_a << endl;

	return 0;
}
