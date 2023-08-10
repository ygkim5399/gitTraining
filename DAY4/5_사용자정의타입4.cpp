#include <vector>
#include <algorithm>
#include "show.h"

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b)
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }

	Point(const Point& p)
	{
		std::cout << "Point(const Point&)" << std::endl;
	}
	void dump() const
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{
	// 값 보관과 포인터 보관을 헷갈리지 마세요
	std::vector<Point>  v1;
	std::vector<Point*> v2;
	//-------------------------------------------
	std::vector<Point*> v;

	v.push_back(new Point(1, 2));
	v.push_back(new Point(3, 1));
	v.push_back(new Point(4, 2));
	v.push_back(new Point(2, 2));

	// v를 sort 해 보세요.. 비교 정책은 "람다표현식" 사용

//	std::sort(v.begin(), v.end()); // 에러는 아니지만, 
									// 객체의 상태를 비교하는 것이 아니라
									// 주소를 크기 비교하는 것
									// 의미 없는 코드

	std::sort(v.begin(), v.end(),
		[](const Point* p1, const Point* p2) { return p1->x < p1->x; });


	for (auto p : v) 
		p->dump();

	for (auto p : v) delete p;

}




