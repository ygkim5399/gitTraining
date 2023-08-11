#ifndef DAY2


#include <iostream>
#include <list>
#include <algorithm>



int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p1 = s.begin();
	auto p2 = std::next(p1, 5);


	// reverse iterator 를 만드는 방법
	// 1. 클래스 템플릿을 직접 사용
	// -> c++17 은 타입인자 생략가능
	// -> c++17 이전은 반드시 타입인자 필요

	//std::reverse_iterator<std::list<int>::iterator> p3(p2); // ~ c++14
	//std::reverse_iterator p3(p2); // c++17 ~ 

	// 2. 함수 템플릿 사용 (결국, 클래스 템플릿의 객체를 생성하는 기능 수행)
	// -> 함수 템플릿은 타입생략이 가능하므로 코드가 단순하다.

	auto p3 = std::make_reverse_iterator(p2);

	std::cout << *p3 << std::endl; // 5
	++p3;
	std::cout << *p3 << std::endl; // 4

}

#endif