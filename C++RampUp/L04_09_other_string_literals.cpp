// L04_09_other_string_literals.cpp
// 2023 JUN 04
// Tershire

// HEADER FILE ////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>


// MAIN ///////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;

	// Various Literals =======================================================
	wchar_t    name[] = L"CASKER";
	char16_t   song[] = u"Ipanema Girl of July";
	char32_t lyrics[] = U"걷고 있었어 눈을 감고 천천히\n"
						 "처음 날 떨리게 했던 너의 미소와 속삭이던 추억들";
	string raw_str1 = R"(Your dazzling look \n might disappear 
                         the moment I touch)";
	string raw_str2 = R"+*(너를 위한 노래도 \n "애가 타는 마음도"
                           모두 묻었었지만)+*";


	// UTF-8 ==================================================================
	string lyr1 = u8"I want to leave\n"
		            "Even in a dream alone";
	char lyr2[] = u8"다시 그 때 그 자리\n"
		            "그 바다에서\n"
		            "날 기다릴까";


	// OUTPUT =================================================================
	wcout << name << endl;
	cout << song     << endl
		 << lyrics   << endl
		 << raw_str1 << endl
		 << raw_str2 << endl
		 << lyr1     << endl
		 << lyr2     << endl;

	return 0;
}
