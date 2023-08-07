#include <iostream>
#include <list>		// 
#include <vector>	//
#include <string>
#include <algorithm> // std::find 가 이 헤더에 있습니다.

// 교재 40 page

// STL 의 3대 요소
// Container(컨테이너) : list, tree, 등의 자료구조를 구현한 클래스 템플릿
// Iterator(반복자)    : 컨테이너의 요소를 가리키는 포인터 역활의 객체
// Algorithm(알고리즘) : find 같이, 모든 컨테이너에 동작하는
//						          멤버함수가 아닌 일반 함수(템플릿)

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// 뒤집는 알고리즘은 std::reverse 입니다.
	// v의 모든 요소 뒤집어 보세요
	std::reverse(v.begin(), v.end());

	std::list<int> s = { 1,2,3,4,5 };
	// s도 뒤집어 보세요
	std::reverse(s.begin(), s.end());
	
	for (auto e : v) { std::cout << e << std::endl; }
	for (auto e : s) { std::cout << e << std::endl; }
}

// std::reverse(v) 로 하면 더 간단하지 않나요 ?? 
// => C++98 당시 구현에 어려움이 있었습니다. 이유는 내일 소개
// => C++20 부터 됩니다. - concept 이라는 새로운 문법으로 해결
// std::ranges::reverse(v); // ok

// cppreference.com 접속 해 보세요
//-------------------------------
// boost.org 에 접속 해보세요

// STL : 모든 것이 엄격하게 검증한 후에 추가됨 C++ 표준

// boost : 1999년 발표된 C++ 범용적 라이브러리
//         1년에도 3~4회씩 계속 update 됨
//		   여기서 검증이 끝나면 대부분 표준에 추가됨.

// STL : Standard Template Library
