#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// 1. 기본 버전(in place, 값 버전)
//	auto p1 = std::remove(v1.begin(), v1.end(), 3);

	// 2. 조건자 버전 : _if, 마지막 인자가 "함수 또는 람다표현식"
	auto p1 = std::remove_if(v1.begin(), v1.end(), 
							[](int n) { return n % 2 == 1; });

	show(v1);
	show(v2);
}
