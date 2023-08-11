#ifndef DEBUG

#include <iostream>

#include <list>
#include <vector>
#include <string>

// 교재 40 page

// STL 의 3대요소
// Container(컨테이너)	: list ,tree, 등의 자료구조를 구현한 클래스 템플릿
// Iterator(반복자)		: 컨테이너의 요소를 가리키는 포인터 역할의 객체
// Algorithm(알고리즘)	: find 같이 모든 컨테이너에 동작하는 멤버가 아닌 일반함수(템플릿)


int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	// 뒤집는 알고리즘은 std::reverse 입니다.
	// v 의 모든 요소를 뒤집어보세요
	std::reverse(v.begin(), v.end());

	std::list<int> s = { 1,2,3,4,5 };
	// s 도 뒤집어 보세요
	std::reverse(s.begin(), s.begin());
	for (auto e : v) { std::cout << e << std::endl; }
	for (auto e : s) { std::cout << e << std::endl; }

	// std::reverse(v) 로 하면 더 간단하지 않나요? 
	// -> c++98 당시 구현에 어려움이 있었습니다.
	// -> c++20 부터 가능 - concept 라는 새로운 문법으로 해결
	//std::ranges::reverse(v); // ok
}

// STL : 모든것이 엄격하게 검증한 후에 추가됨 C++ 표준
// boost : 1999년에 발표된 C++ 범용적 라이브러리
//		   1년에도 3~4회씩 계속 Update 됨
//			여기서 검증이 끝나면 대부분 표준에 추가됨

#endif