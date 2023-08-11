#ifndef DAY4
#include <iostream>
#include <memory>

///*
void* operator new(size_t sz)
{
	std::cout << "new : " << sz << std::endl;
	return malloc(sz);
}
//*/
struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// 아래 코드는 동적 메모리 할당을 몇번하게 될까요 ? 2번
	// 1. 사용자가 만든 코드인 new Point(1,2)
	// 2. shared_ptr 생성자 안에서 "관리객체(참조계수등)" 을 만들 때 new 사용

	// 아래처럼 사용하면
	// -> Point 객체와 관리객체를 따로 할당하게 됩니다.
	//std::shared_ptr<Point> sp(new Point(1, 2));
	
	// 아래처럼 사용하면 make_shared 가 
	// 1. Point 객체와 관리객체를 같이 (연속적으로) 할당하고
	// 2. 해당 메모리를 관리하는 shared_ptr 을 반환해 줍니다.
	// 결국 위와 동일한 의미인데, 보다 효율적으로 메모리를 관리하게 됩니다.
	std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2);

	// 결론, 스마트 포인터(shared_ptr) 을 사용할 것이라면
	std::shared_ptr<Point> sp(new Point(1, 2)); // bad, 이렇게 하지말고
	std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2); // 이렇게 하세요
}





#endif