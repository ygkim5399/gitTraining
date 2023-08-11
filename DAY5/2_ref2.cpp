#include <iostream>
#include <functional>

// reference_wrapper 의 정확한 원리
// 1. 결국 내부적으로 포인터를 보관하는 것
// 2. 복사/대입 연산시 "포인터 처럼 동작"
// 3. raw reference 로 변환 가능 


// C++ 표준의 reference_wrapper 를 만들어 봅시다.
template<typename T> 
class reference_wrapper
{
	T* obj;
public:
	reference_wrapper(T& r) : obj(&r) {}

	// 변환 연산자 : 객체가 다른 타입으로 변환이 필요할때 호출
	operator T& () { return *obj; }
};

int main()
{
	int n1 = 10;
	int n2 = 20;

	reference_wrapper<int> r1 = n1;
	reference_wrapper<int> r2 = n2;

	r1 = r2;

	// reference_wrapper => int& 로 호환가능하게
	int& r = r1; // r1.operator int&() 함수 가 필요 !

	std::cout << n1 << std::endl;
	std::cout << n2 << std::endl;
	std::cout << r1 << std::endl; 
	std::cout << r2 << std::endl; // cout << r2.operator int&() 의 원리로 출력가능
}

