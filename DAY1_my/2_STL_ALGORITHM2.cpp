#include <iostream>

// Step2. 검색구간의 일반화

// Step 1. C 표준 함수
char* xstrchr(char* first, char* last, int c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	char s[] = "abcdefgh";

	// C 언어 표준에 strchr 함수가 있습니다. 
	// 일반적으로 프로그래밍에서 끝은 제외한다. 
	char* p = xstrchr(s, s+4, 'c');

	if (p == 0)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}