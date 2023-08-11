#ifndef DAY3
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,-2,3,-4,5,-6,7,-8,9,-10 };

	// �� ��å�� �����ϰ� �ʹ�. (���밪���� ����)


	// c++98 ���� : �� �Լ��� ���� �Լ� ����
	std::sort(v.begin(), v.end(), [](int a, int b) {return abs(a) < abs(b); });

	// Python : ���Լ��� �����Լ��� ����..
	// sort(v.begin(), v.end(), [](int a) {return abs(a); });

	// c++20 ���� ���� ���� �����Լ��� "projection" �̶�� �մϴ�.
	//std::ranges::sort(v.begin(), v.end(),
	//					std::less<int>(), // < �������� ��
	//					[](int a) {return abs(a); }); // projection

	// 2�� ��Ҹ� ���� projection �� ������, ���� ����� 
	// 3��° ������ �� �Լ��� ����

	// �̷��Ե� ��밡��
	//std::ranges::sort(v,	{}, [](int a) {return abs(a); });
	//std::ranges::sort(v,	{}, std::abs);


	show(v);
}

#endif