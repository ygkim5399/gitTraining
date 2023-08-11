#ifndef DAY5
#include <iostream>
#include <functional>

//			n1		n2	
//value :	10		20
//add	:	100		200
//
//
//r1 이 n1을 가리킬 때, r1내부에 포인터로 100번지 가리킴
// r1 = r2 일 때, r1 의 포인터가  200번지로 변경

// reference_wrapper 의 정확한 원리
// 1. 결국 내부적으로 포인터를 보관하는 것
// 2. 복사/대입 연산시 "포인터 처럼 동작"
// 3. raw reference 로 변환 가능 


// c++ 표준의 reference_wrapper 를 만들어 봅시다.
template <typename T>
class reference_wrapper {
	T* obj;
public:
	reference_wrapper(T& r) : obj(&r) {}

	// 변환 연산자 : 객체가 다른타입으로 변환이 필요할 때,
	operator T& () { return *obj; }
};


int main()
{
	int n1 = 10;
	int n2 = 20;


	std::reference_wrapper<int> r1 = n1;
	std::reference_wrapper<int> r2 = n2;

	r1 = r2;	
	
	// reference_wrapper -> int& 로 호환가능하게
	int& r = r1;	// r1.operator int&() 함수 필요

	std::cout << n2 << std::endl;
	std::cout << r2 << std::endl;// cout << r2.operator int&() 의 원리로 출력가능
	std::cout << n1 << std::endl;
	std::cout << r1 << std::endl;
}


#endif