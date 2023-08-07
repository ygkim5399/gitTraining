#include <iostream>

// find ������
// => ���� Ÿ���� �迭����
// => [first, last) �������� ���� �˻� ����
// => last �� �˻� ����� �ƴ�

// �˻� ����   : [first, last)
// ������ �̵� : ������ ++ ������
// ������ Ÿ�� : �ݵ�� raw pointer �� �ʿ�� ����
//				++, *, !=, == ������ ������ ��� ��ü(����Ʈ����������)

// ������ ��ȯ : last

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
		++first;
	return first;
}


int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// ���� : last �� �߸��� �ּ�(�迭 ���� �ʰ�)�� ������ ��� �ǳ��� ?
	// => ����� �߸� �Դϴ�. 
	// => ������ ���� �մϴ�.
	// => find �� ����ڰ� ��ȿ�� ������ �����Ѵٴ� �����Ͽ� �����մϴ�.
	// => find �� ���������� ��ȿ���� �����ϸ� �� ��ü�� "������ ����" �Դϴ�.
	// double* p = find(x, x + 12, 7);

	// �׷��� x+10 ���ٴ� �Ʒ� �ڵ带 �����մϴ�.
	double* p = find(std::begin(x), std::end(x), 7);


	if (p == x + 5)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}