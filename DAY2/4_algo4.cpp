#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	// v와 s를 각각 뒤집어(reverse) 해 보세요
	// 1. 멤버함수를 먼저 찾아라!
	// 2. 멤버함수가 없다면 알고리즘(일반함수)를 사용해라

	// vector 는 알고리즘 사용(일반화된 구현 사용)
	std::reverse(v.begin(), v.end()); 

	// list 는 아래 모두 가능
	// 1. 일반화된 구현과 ( 요소 자체를 swap, sizeof(요소크기) 만큼의 복사 발생)
	// 2. list 특화된 구현 ( prev, next 를 swap)
	//						sizeof(포인터크기) 만큼의 복사
	// 이 존재한다는 의미.
	s.reverse();                      // ok
	std::reverse(s.begin(), s.end()); // ok


	show(v);
	show(s);
}

