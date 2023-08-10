#include <vector>
#include "show.h"

// vector<int> 가 아닌 
// vector<Point> 즉, 사용자 정의 타입을 저장하는 것에 대한 이야기!

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	// 1. 디폴트 생성자가 없는 경우. 
	
//	std::vector<Point> v1(10); // error. 10개 만들때 디폴트 생성자 사용
	std::vector<Point> v1(10, Point(0,0) ); // ok. Point(0,0) 객체를 복사해서
											// 10개 생성(복사 생상자사용)

	std::vector<Point> v2 = { Point(0,0), Point(1,1), Point(2,2) };

	std::vector<Point> v3 = { {0,0}, {1,1}, {2,2} }; // C++11 부터
													// "중괄호 초기화" 문법
}



