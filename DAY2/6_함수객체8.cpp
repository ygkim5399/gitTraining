#include <vector>
#include <algorithm>
#include <functional>
#include "show.h"

// std::sort() 사용법 정리

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 1. 비교 정책을 전달하지 않은 경우
	std::sort(v.begin(), v.end());


}