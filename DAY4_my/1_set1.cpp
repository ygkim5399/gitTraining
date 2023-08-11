#ifndef DAY4

#include <iostream>
#include "show.h"

#include <set> // Red Black Tree로 구현 (균형잡힌 tree)

int main()
{
	// 핵심 1. set은 내부적으로 "tree"로 구현.
	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);

	// 핵심 2. set에 요소삽입은 insert 로만 가능하다.
	//s.push_back(10); // error, push back 은 맨 뒤에 넣는다는 의미이지만
	//							tree는 맨뒤 개념이 없다. (가장 오른쪽에 넣을경우 tree가 깨진다)

	// 핵심 3. 반복자는 읽기 전용입니다.
	auto p = s.begin(); // 가장 왼쪽자식(작은값)
	//*p = 35; // error. set의 반복자는 읽기전용


	// 핵심 4. 반복자를 ++로 이동하면
	//			-> set에 있는 모든 데이터를 크기 순서대로 접근

	//auto p = s.begin();
	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}
	
	// 핵심 5. 요소의 중복을 허용하지 않습니다.
	//		-> 반환타입 : std::pair<iterator, bool> : 어디서 실패했는지 (이미 존재하는 요소의 iterator)
	auto ret = s.insert(15); // 실패
	//std::pair<std::set<int>::iterator, bool> ret = s.insert(15); // c++11(auto) 이전,
	if (ret.second == false) {
		std::cout << "insert fail : " << *(ret.first) << std::endl;
	}
}







#endif