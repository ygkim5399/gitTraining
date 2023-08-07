#include <iostream>

// 일반화 : 함수가 다양하게 활용 가능하도록.. 일반화 하는 것..

// Step 2. 검색 구간의 일반화

char* xstrchr(char* first, char* last, int c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	char s[] = "abcdefgh";
		
//	char* p = xstrchr(s, s + 4, 'e');
	char* p = xstrchr(s, s + 4, 'c');

	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}