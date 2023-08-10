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

// STL 컨테이너에 보관하려면 아래 조건을 만족해야 합니다.

// 1. 복사 생성자가 있어야 합니다.(사용자가 만들건, 컴파일러의 디폴트 버전이 있건)
// 2. 소멸자가 있어야 합니다.(사용자가 만들건, 컴파일러의 디폴트 버전이 있건)

// 복사 생성자와 소멸자는 사용자가 만들지 않아도, 컴파일러가 제공합니다.
// "=delete"로 제거하지 않은 이상 모든 타입에는 위 2개 멤버 함수가 있습니다.

// 디폴트 생성자는 없어도 되는데, 대신, 아래 처럼 사용해야 합니다.

int main()
{
	// 1. 디폴트 생성자가 없는 경우. 
	
//	std::vector<Point> v1(10); // error. 10개 만들때 디폴트 생성자 사용
	std::vector<Point> v1(10, Point(0,0) ); // ok. Point(0,0) 객체를 복사해서
											// 10개 생성(복사 생상자사용)

	std::vector<Point> v2 = { Point(0,0), Point(1,1), Point(2,2) };

	std::vector<Point> v3 = { {0,0}, {1,1}, {2,2} }; // C++11 부터
													// "중괄호 초기화" 문법

//	v3.resize(10); // error. 새로 추가된 항목에 대해서 디폴트 생성자 필요!

	v3.resize(10, Point(0,0) ); // ok
}



