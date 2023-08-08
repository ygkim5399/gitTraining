// 7_알고리즘의4가지변형2
#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,1,2,6,1,2,9,1 };

	// 주어진 구간에서 "특정값" 을 "다른값" 으로 변경하는 알고리즘은
	// std::replace 입니다
	// 1. v.begin(), v.end() 에서 1을 0으로 변경해 보세요

	std::replace(v.begin(), v.end(), 1, 0);


	// 2. "3의 배수"를 -1로 변경해 보세요
	// "Pred" : predicator(조건자)를 의미, 반환값이 bool 은 함수
	std::replace_if(v.begin(), v.end(), 
					[](int n) { return n != 0 && n % 3 == 0; }, 
					-1);

	show(v); //  0, 2, -1, 0, 2, -1, 0, 2, -1, 0
}

// STL 을 잘 활용하면
// => for, while 등의 반복문이 많이 사라지게 됩니다