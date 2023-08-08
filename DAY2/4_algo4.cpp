#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	// v�� s�� ���� ������(reverse) �� ������
	// 1. ����Լ��� ���� ã�ƶ�!
	// 2. ����Լ��� ���ٸ� �˰���(�Ϲ��Լ�)�� ����ض�

	// vector �� �˰��� ���(�Ϲ�ȭ�� ���� ���)
	std::reverse(v.begin(), v.end()); 

	// list �� �Ʒ� ��� ����
	// 1. �Ϲ�ȭ�� ������ ( ��� ��ü�� swap, sizeof(���ũ��) ��ŭ�� ���� �߻�)
	// 2. list Ưȭ�� ���� ( prev, next �� swap)
	//						sizeof(������ũ��) ��ŭ�� ����
	// �� �����Ѵٴ� �ǹ�.
	s.reverse();                      // ok
	std::reverse(s.begin(), s.end()); // ok


	show(v);
	show(s);
}

