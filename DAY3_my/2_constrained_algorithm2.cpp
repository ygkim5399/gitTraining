#ifndef DAY3
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,-2,3,-4,5,-6,7,-8,9,-10 };

	// 비교 정책을 변경하고 싶다. (절대값으로 정렬)


	// c++98 시절 : 비교 함수로 이항 함수 전달
	std::sort(v.begin(), v.end(), [](int a, int b) {return abs(a) < abs(b); });

	// Python : 비교함수로 단항함수를 전달..
	// sort(v.begin(), v.end(), [](int a) {return abs(a); });

	// c++20 에서 위와 같은 단항함수를 "projection" 이라고 합니다.
	//std::ranges::sort(v.begin(), v.end(),
	//					std::less<int>(), // < 연산으로 비교
	//					[](int a) {return abs(a); }); // projection

	// 2개 요소를 각각 projection 에 보내서, 나온 결과를 
	// 3번째 인자의 비교 함수에 전달

	// 이렇게도 사용가능
	//std::ranges::sort(v,	{}, [](int a) {return abs(a); });
	//std::ranges::sort(v,	{}, std::abs);


	show(v);
}

#endif