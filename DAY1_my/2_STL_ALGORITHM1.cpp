#include <iostream>

// Step 1. C 표준 함수
char* strchr(char* s, int c)
{
	while (*s != 0 && *s != c)
		++s;

	return *s == 0 ? s : 0;
}
int main()
{
	char s[] = "abcdefgh";

	// C 언어 표준에 strchr 함수가 있습니다. 
	char* p = strchr(s, 'c');

	if (p == 0)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}