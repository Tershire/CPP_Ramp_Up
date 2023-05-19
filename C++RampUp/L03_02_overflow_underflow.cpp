// L03_02_overflow_underflow.cpp
// 2023 APR 08
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <climits>

// DEFINE | CONSTANT //////////////////////////////////////////////////////////
#define ZERO 0

// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "sam: " << sam << ", sue: " << sue << endl;

	sam += 1;
	sue += 1;
	cout << "sam: " << sam << ", sue: " << sue << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "sam: " << sam << ", sue: " << sue << endl;

	sam -= 1;
	sue -= 1;
	cout << "sam: " << sam << ", sue: " << sue << endl;

	return 0;
}
