// L04_0X_two_pointers_delete.cpp
// 2023 JUN 06
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// allocate memory to a pointer
	int* p_n1 = new int;

	*p_n1 = 7;

	// make another pointer to point to the same memory
	int* p_n2 = p_n1;

	cout << "______________________________________________________________\n";
	cout << "p_n1 points to " << p_n1
		<< " where value stored is " << *p_n1 << endl
		<< "p_n2 points to " << p_n2
		<< " where value stored is " << *p_n2 << endl;

	// free memory with the second pointer
	delete p_n2;

	cout << "After_delete__________________________________________________\n";
	cout << "p_n1 points to " << p_n1
		<< " where value stored is " << *p_n1 << endl
		<< "p_n2 points to " << p_n2
		<< " where value stored is " << *p_n2 << endl;

	return 0;
}
