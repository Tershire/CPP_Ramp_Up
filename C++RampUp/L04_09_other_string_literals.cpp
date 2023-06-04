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
	char32_t lyrics[] = U"�Ȱ� �־��� ���� ���� õõ��\n"
						 "ó�� �� ������ �ߴ� ���� �̼ҿ� �ӻ��̴� �߾��";
	string raw_str1 = R"(Your dazzling look \n might disappear 
                         the moment I touch)";
	string raw_str2 = R"+*(�ʸ� ���� �뷡�� \n "�ְ� Ÿ�� ������"
                           ��� ����������)+*";


	// UTF-8 ==================================================================
	string lyr1 = u8"I want to leave\n"
		            "Even in a dream alone";
	char lyr2[] = u8"�ٽ� �� �� �� �ڸ�\n"
		            "�� �ٴٿ���\n"
		            "�� ��ٸ���";


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
