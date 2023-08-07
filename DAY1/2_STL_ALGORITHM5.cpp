#include <iostream>

// Step 5. �˻� ���н� ��ȯ �� ����
// => nullptr �� �ƴ� "last" ��ȯ

// 1. last �� �˻��� ���Ե��� �����Ƿ� 
//    �˻��� �����ߴٸ� last �� ���ü� ����.

// 2. �˻� ���н� last ��ȯ �ϸ�
// => find ������ ��������.
// => ���н� ��ȯ ���� ���� ������ ������ �ȴ�.

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
		++first;
	return first;// == last ? nullptr : first;
}
int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 5, 7);

	if (p == x + 5 )
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}