#ifndef DAY3

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	int n1 = std::max(1, 2);			// c++98 알고리즘은 "함수(템플릿)" 입니다. 
	//int n2 = std::ranges::max(1, 2);	// c++20 알고리즘은 "함수 객체" 입니다.
	//int n3 = std::ranges::max.operator(1,2);

	// c++20에서 추가된 알고리즘들을 
	// "constrained algorithm" 이라고 부릅니다.

	// 보통은 "ranges algorithm" 이라고 부릅니다.
}



#endif 