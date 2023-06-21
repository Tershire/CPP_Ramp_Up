// L04_24_array_alternatives.cpp
// 2023 JUN 21
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <array>


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	// BUILT-IN ARRAY =========================================================
	int arr_B_1[3] = {3, 2, 9};
	
	// out-of-index -----------------------------------------------------------
	arr_B_1[-2] = 4; // compiler does not catch "out-of-index"

	// copy -------------------------------------------------------------------
	int arr_B_2[3];

	// arr_B_2 = arr_B_1; // not allowed

	for (int i = 0; i < 3; i++)
	{
		arr_B_2[i] = arr_B_1[i];
	}


	// std::vector ============================================================
	std::vector<int> vec_1(3);

	vec_1[0] = 3;
	vec_1[1] = 2;
	vec_1[2] = 9;

	// out-of-index -----------------------------------------------------------
	// vec_1[-2] = 4; // compiler does not catch "out-of-index" but warns
	// vec_1.at(-2) = 4; // detect error at runtime

	// copy -------------------------------------------------------------------
	std::vector<int> vec_2(3);

	vec_2 = vec_1;

	// member function --------------------------------------------------------
	vec_2.push_back(1);
	vec_2.push_back(4);
	
	for(int i = 0; i < vec_2.size(); i++)
	{
		std::cout << vec_2[i];
		
		if (i == vec_2.size() - 1)
			std::cout << std::endl;
		else
			std::cout << ", ";
	}


	// std::array =============================================================
	std::array<int, 3> arr_C_1 = {3, 2, 9};
	
	// out-of-index -----------------------------------------------------------
	// arr_C_1[-2] = 4; // compiler does not catch "out-of-index" but warns
	// arr_C_1.at(-2) = 4; // detect error at runtime

	// copy -------------------------------------------------------------------
	std::array<int, 3> arr_C_2;

	arr_C_2 = arr_C_1;

	return 0;
}
