#include <vector>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) 
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }
	
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "Point(const Point&)" << std::endl;
	}
};


int main()
{
	std::vector<Point> v;

	// 실행결과 예측해 보세요
	// 1. 객체를 생성후 넣기.
//	Point pt(1, 2);
//	v.push_back(pt); // pt 자체를 보관하는 것이 아닌
					 // 버퍼에 Point 를 추가하고 pt 를 복사(복사생생자)

	// 단지, vector 에 요소 한개만 추가하려고 하는 경우 라면
	// 1. Point 객체를 만들어서 전달(v.push_back(pt))  하지 말고
	// 2. Point 객체를 만들기 위한 생성자 인자(x, y값)만 전달하는 것이
	//    효율적입니다.

	v.emplace_back(1, 2); // 이 멤버 함수가 내부적으로
						  // new Point(1,2) 로 추가!

	std::cout << "------------------" << std::endl;	
}

// 정리
// 컨테이너가
// 1. primitive type(int, double, char 등)을 저장하는 경우
// => std::vector<int>
// => push_xxx(), insert()... 를 사용하면 됩니다.
// => 물론, emplace_xxx()를 사용해도 됩니다.

// 2. 컨테이너가 사용자 정의 타입의 주소를 보관하는 경우
// => std::vector<Point*> v;
// => 주소는 결국 정수값(32bit, 64bit)의 의미 입니다.
// => push_xxx(), insert()... 를 사용하면 됩니다.
// => 물론, emplace_xxx()를 사용해도 됩니다.

// 3. 컨테이너가 사용자 정의 타입을 "값"으로 보관하는 경우. 
// => std::vector<Point> v;
// 
// Point pt(1,2);	// 외부에서 객체를 만들고
// v.push_back(pt); // pt 의 복사본 보관
					// 즉, 2개의 객체가 생성된것!!

// v.emplace_back(1,2); // emplace_back 안에서 객체 생성
//					    // 즉, 한개의 객체!!

// push_xxx() 대신 emplace_xxx()를 권장합니다.
// push_front() => emplace_front()
// push_back()  => emplace_back()
// insert()     => emplace()

