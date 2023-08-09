#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,-2,3,-4,5,-6,7,-8,9,-10 };

	// 비교 정책을 변경(절대값으로 정렬)하고 싶다.
	
	// C++98 시절 : 비교 함수로 이항 함수 전달
	std::sort(v.begin(), v.end(), [](int a, int b) { return abs(a) < abs(b); });


	// Python : 단항함수를 전달..
	sort(v.begin(), v.end(), [](int a) { return abs(a); });




	show(v);
}