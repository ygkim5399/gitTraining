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


	// Point 는 크기 비교가 될 수 없으므로 error
	//std::sort(v.begin(), v.end());
	
	// c++98 스타일
	std::sort(v.begin(), v.end(), 
		[](const Point& p1, const Point& p2) {return p1.y < p2.y; });


	// c++20 스타일
	//std::ranges::sort(v, {}, 
	//				&Point::y); // 구조체의 어느 항목으로 크기를 비교할지를
	//							// "멤버데이터에 대한 포인터"로 전달


}


#endif