
#include <vector>
#include <algorithm>
#include "show.h"

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b)
	{
	}
	~Point() {  }

	void dump() const 
	{
		std::cout << x << ", " << y << std::endl;
	}

	bool operator<(const Point& pt) const { return y < pt.y; }
	bool operator==(const Point& pt) const { return x == pt.x && y == pt.y; }
};

int main()
{
	std::vector<Point> v;

	v.emplace_back(1, 2); // Point(1,2) 를 보관
	v.emplace_back(2, 3);
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);

	// 핵심 : 사용자 정의 타입을 보관하는 컨테이너에..
	//        특정 알고리즘을 사용하려면
	// => 알고리즘이 요구하는 조건을 사용자정의 타입이 만족해야 합니다.

	// => std::sort 를 사용하려면 Point 타입이 크기 비교(<)가 가능해야 합니다.
//	std::sort(v.begin(), v.end());

	// 방법 1. std::sort 의 3번째 인자로 크기를 비교하는 함수(람다표현식) 전달

	std::sort(v.begin(), v.end(),
		[](const Point& p1, const Point& p2) { return p1.y < p2.y; });

	// C++20 이라면 위코드를 아래 처럼 간단히 할수 있습니다
//	std::ranges::sort(v, {}, &Point::y);



	// 방법 2. Point 타입 자체에 < 연산이 있으면 됩니다.
	// STL 은 내부적으로 < 와 == 를 많이 사용하므로
	// 사용자 정의 타입이 < 와 == 를 지원하면 편리합니다.
	// std::sort 는 3번째 인자를 보내지 않으면 내부적으로 < 사용. 
	std::sort(v.begin(), v.end());


	// 일반적으로는 "방법1"을 널리 사용합니다.
}




