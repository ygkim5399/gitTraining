// 1_STL_PREVIEW1
#include <iostream>
#include <list>

int main()
{
	// STL 에는 이미 만들어진 다양한 자료구조 클래스가 있습니다.
	// => 컨테이너
	std::list<int> s;
	s.push_back(10);
	s.push_back(20);
	s.push_back(30);

	// list 를 만드는 2가지 방법
	std::list<int> s1 = { 1,2,3 }; // C++14 까지는 타입 필요

	std::list      s2 = { 1,2,3 }; // C++17 부터는 타입 생략가능

}