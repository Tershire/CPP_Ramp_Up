// L04_17_pointer_dynamic_memory.cpp
// 2023 JUN 06
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;
	
	// Variable Name ==========================================================
	int m = 6;
	
	string str_m = "hi";

	cout << "______________________________________________________________\n"
	     << "value stored @ " << &m     << " is " << m     << endl
	     << "value stored @ " << &str_m << " is " << str_m << endl;


	// Dynamic Memory using Pointer ===========================================
	int* p_n = new int; // create a int* pointer
	*p_n = 7;
	
	string* p_str_n = new string;
	*p_str_n = "bye";

	cout << "______________________________________________________________\n"
         << "value stored @ " << p_n     << " is " << *p_n     << endl
	     << "value stored @ " << p_str_n << " is " << *p_str_n << endl;

	// Free Memory ------------------------------------------------------------
	delete p_n;
	//delete p_n; // <!> NOT Ok <!> it runs,.. though 
	//delete &m;  //                it runs too. why?
	//int* p_m = &m;
	//delete p_m; // ERROR: _crtisvalidheappointer(block)

	return 0;
}
