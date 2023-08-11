#ifndef DEBUG

#include <iostream>

// Step4. ������ Ÿ�԰� �˻���� ����� Ÿ���� �Ͻ��� ��ȯ ���
// template <typename T> T* find(T* first, T* last, T c)
// template �� ��ó�� ����� 2���� ������ �ֽ��ϴ�. 
// 1. ������ Ÿ�԰� �˻��� ����� Ÿ���� �����˴ϴ�. 
// -> double �迭���� int �� �˻��� �ȵ˴ϴ�. 
// 2. ������ Ÿ���� T* ��� �ϸ� �ݵ�� �����͸� �����ؾ��մϴ�.
// -> ����Ʈ �����Ͱ��� ������ ���� ��ü�� ������ �� �����ϴ�.

template <typename T1, typename T2>
T1 find(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
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
	double* t = find(a, a + 10, 5);
	if (t == 0)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *t << std::endl;
}

#endif
