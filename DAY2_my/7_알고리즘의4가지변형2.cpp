#ifndef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"



int main()
{
	std::vector<int> v = { 1,2,3,1,2,6,1,2,9,1 };


	// �־��� �������� "Ư����"�� "�ٸ���"���� �����ϴ� �˰����� 
	// std::replace �Դϴ�.
	// -> v.begin(), v.end() ���� 1�� 0���� �����غ�����

	//std::replace(v.begin(), v.end(), 1, 0);
	// 0, 2,3,0,2,6,0,2,9,0


	// 2. 3�� ����� -1�� �����غ�����
	// "Pred" : predicator(������)�� �ǹ�, ��ȯ���� bool �� �Լ�
	std::replace_if(v.begin(), v.end(), [](int n) {return n % 3 == 0; }, -1);

	show(v); 

}

// STL �� �� Ȱ���ϸ�
// -> for, while ���� �ݺ����� ���� ������� �˴ϴ�.

#endif