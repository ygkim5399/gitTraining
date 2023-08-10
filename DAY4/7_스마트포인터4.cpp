#include <iostream>

// C++11 의 스마트포인터를 사용하려면 필요한 헤더
// => std::shared_ptr 
// => std::weak_ptr
// => std::unique_ptr
#include <memory>


class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
};

int main()
{
	// C++ 표준 "std::shared_ptr" 을 사용법
	// 
	// 핵심 1. = 초기화는 사용할수 없습니다.
	// => 생성자가 explicit 라는 의미.
	std::shared_ptr<int> p1(new int);  // ok
//	std::shared_ptr<int> p2 = new int; // error



	// 핵심 2. 스마트 포인터의 크기
	// => raw pointer 의 2배					
	// => 단, 구현에 따라 다를수 있음			// 32bit		64bit
	std::cout << sizeof(p1)   << std::endl; // 8byte		16byte
	std::cout << sizeof(int*) << std::endl; // 4byte		8byte


	// 핵심 3. -> 와 . 연산자
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;

	// 스마트 포인터는 "객체" 이지 "진짜 포인터는 아닙니다."

	// -> : 연산자 재정의가 되어 있어서 사용
	//      대상체(Car) 멤버에 접근
	sp1->Go(); // shared_ptr 이 아닌 Car 의 멤버 함수


	// . : 대상체(Car) 가 아닌 shared_ptr 자체의 멤버 함수 접근

	int n1 = sp1.use_count();	// Car 가 아닌 shared_ptr 자체의 멤버 함수

	std::cout << n1 << std::endl; // 2
}



