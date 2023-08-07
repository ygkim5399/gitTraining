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
	// ?

	std::list<int> s = { 1,2,3,4,5 };
	// s도 뒤집어 보세요
	// ?
	
	for (auto e : v) { std::cout << e << std::endl; }
	for (auto e : s) { std::cout << e << std::endl; }
}





