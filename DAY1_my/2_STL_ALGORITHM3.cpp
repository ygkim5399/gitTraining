#ifndef DEBUG

#include <iostream>

// Step3. �˻� ��� Ÿ���� �Ϲ�ȭ
// -> ���ø� ���
// -> ���ڿ� �� �ƴ϶� ��� Ÿ���� �迭���� �˻� ����
// -> �Լ��̸� ���� : strchr -> find

// Step 1. C ǥ�� �Լ�
template <typename T>
T* find(T* first, T* last, T c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	//char s[] = "abcdefgh";

	// C ��� ǥ�ؿ� strchr �Լ��� �ֽ��ϴ�. 
	// �Ϲ������� ���α׷��ֿ��� ���� �����Ѵ�. 
	//char* p = find(s, s + 4, 'c');


	// �迭�� ������ �ּҸ� ������ �Ұ��������� �񱳸� ���� ����� �����ϴ�.
	// ex a[10] ���� a[10] �� ������ �Ұ��������� �񱳷� ����� ����

	double a[] = { 1,2,3,4,5,6,7,8,9 };
	double* t = find(a, a + 10, 5.0);
	if (t == 0)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *t << std::endl;
}

#endif
