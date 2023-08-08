#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
//	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int>   v = { 1,2,3,1,2,3,1,2,3,1 };

	// 아래 코드는 vector 가 아닌 list 에도 아무 문제 없이 
	// 잘 동작합니다.
	// => 그런데, 성능을 생각해 보세요 ( list 는 떨어진 메모리 사용)
	/*
	auto p = std::remove(v.begin(), v.end(), 3);
	show(v);
	v.erase(p, v.end());
	show(v);
	*/

	// list 의 경우는 일반화된 알고리즘 std::remove() 보다
	// 멤버 함수 remove() 를 사용하는 것이 좋습니다.
	// list 만의 효율적인 알고리즘으로 구현.
	v.remove(3);

	show(v);
}

