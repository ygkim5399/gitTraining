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
	// => v.begin(), v.end() 에서 1을 0으로 변경해 보세요


	show(v); //
}
