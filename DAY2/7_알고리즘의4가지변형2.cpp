// 7_�˰�����4��������2
#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,1,2,6,1,2,9,1 };

	// �־��� �������� "Ư����" �� "�ٸ���" ���� �����ϴ� �˰�����
	// std::replace �Դϴ�
	// 1. v.begin(), v.end() ���� 1�� 0���� ������ ������

	std::replace(v.begin(), v.end(), 1, 0);


	// 2. "3�� ���"�� -1�� ������ ������
	// "Pred" : predicator(������)�� �ǹ�, ��ȯ���� bool �� �Լ�
	std::replace_if(v.begin(), v.end(), 
					[](int n) { return n != 0 && n % 3 == 0; }, 
					-1);

	show(v); //  0, 2, -1, 0, 2, -1, 0, 2, -1, 0
}

// STL �� �� Ȱ���ϸ�
// => for, while ���� �ݺ����� ���� ������� �˴ϴ�