#include <iostream>

// �Ϲ�ȭ : �Լ��� �پ��ϰ� Ȱ�� �����ϵ���.. �Ϲ�ȭ �ϴ� ��..

// Step 2. �˻� ������ �Ϲ�ȭ

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