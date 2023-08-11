#ifndef DAY2
#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

#include <vector>



int main()
{
	std::vector<int> v	= { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int> s	= { 1,2,3,4,5,6,7,8,9,10 };

	// v�� s �� ���� ������(reverse) �غ�����

	// 1. ����Լ��� ���� ã�ƶ�
	// 2. ����Լ��� ���ٸ� �˰���(�Ϲ��Լ�)�� ����ض�

	// vector �� �˰��� ��� (�Ϲ�ȭ�� ���� ���)
	std::reverse(v.begin(), v.end());


	// list �� �Ʒ� ��� ���� 
	// 1. �Ϲ�ȭ�� ������ (��� ��ü�� swap)
	// 2. list Ưȭ�� ���� (prev, next �� swap) 
	//						sizeof(������ũ��) �� swap
	// �� �����Ѵٴ� �ǹ�
	s.reverse(); // ok
	std::reverse(s.begin(), s.end()); // ok



	show(v);
	show(s);
	return 0;
}



















//
#endif