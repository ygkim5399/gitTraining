#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};

// 이 예제의 핵심은 아래 "Ptr" 입니다.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	Car* operator->() { return obj; }
};

int main()
{
	// p는 Ptr 타입의 객체입니다.
	Ptr p = new Car; 

	// Ptr타입의 객체 p가 마치 Car* 처럼 사용됩니다.
	p->Go(); 
}


