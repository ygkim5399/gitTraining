#ifndef DAY3

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include "show.h"

struct Point
{
	int x, y;
};
int main()
{
	std::vector<Point> v = { {1,2}, {2,3}, {3,4}, {4,5} };


	// Point �� ũ�� �񱳰� �� �� �����Ƿ� error
	//std::sort(v.begin(), v.end());
	
	// c++98 ��Ÿ��
	std::sort(v.begin(), v.end(), 
		[](const Point& p1, const Point& p2) {return p1.y < p2.y; });


	// c++20 ��Ÿ��
	//std::ranges::sort(v, {}, 
	//				&Point::y); // ����ü�� ��� �׸����� ũ�⸦ ��������
	//							// "��������Ϳ� ���� ������"�� ����


}


#endif