#include <iostream>
#include "show.h"

#include <set> // Red Black Tree로 구현

int main()
{
	// 핵심 1. set 은 내부적으로 "tree"로 구현.
	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);

	// 핵심 2. set 에 요소 삽입은 insert 로만 가능하다.
//	s.push_back(10); // error


	// 핵심 3. 반복자는 읽기 전용입니다.
	auto p = s.begin(); // 가장 왼쪽자식(작은값)
//	*p = 35; // error. set 의 반복자는 읽기 전용


	// 핵심 4. 반복자를 ++로 이동하면
	// => set 에 있는 모든 데이타를 크기순서대로 접근

	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}
	
	// 핵심 5. 요소의 중복을 허용하지 않습니다.
	// => 반환타입 : std::pair<iterator, bool> 

	auto ret = s.insert(15);  // 실패

	// auto 가 없던 시절은 아래처럼 했습니다.
//	std::pair<std::set<int>::iterator, bool> ret = s.insert(15);

	if (ret.second == false)
	{
		std::cout << "insert 실패" << std::endl;
		std::cout << *(ret.first) << std::endl;
	}
}

