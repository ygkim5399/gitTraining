#include <iostream>

// Step2. �˻������� �Ϲ�ȭ

// Step 1. C ǥ�� �Լ�
char* xstrchr(char* first, char* last, int c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	char s[] = "abcdefgh";

	// C ��� ǥ�ؿ� strchr �Լ��� �ֽ��ϴ�. 
	// �Ϲ������� ���α׷��ֿ��� ���� �����Ѵ�. 
	char* p = xstrchr(s, s+4, 'c');

	if (p == 0)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}