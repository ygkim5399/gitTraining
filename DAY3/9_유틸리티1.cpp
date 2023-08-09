#include <iostream>
#include "show.h"

template<typename T> void foo(T a) {}

int main()
{
	// pair : 서로다른 타입 2개를 보관하는 구조체
	std::pair<int, double> p1(1, 3.4);

	auto a1 = p1.first;  // 1
	auto a2 = p1.second; // 3.4

	// 2. pair 를 만드는 방법
	std::pair<int, double> p2(1, 3.4);
	std::pair              p3(1, 3.4); // C++17 부터는 타입생략가능

	// C++17 이전이라도 pair 를 만드는 함수 템플릿을 사용하면 
	// 타입 인자 생략가능. 
	auto p4 = std::make_pair(1, 3.4);
}


