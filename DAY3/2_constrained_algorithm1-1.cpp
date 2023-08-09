// 2_constrained_algorithm1-1
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// C++98 알고리즘 : 인자로 반복자만 전달 가능
	auto ret1 = std::find(v.begin(), v.end(), 3);

	// C++20 의 새로운 알고리즘 : 반복자도 가능하고, 컨테이너도 가능
	// std::ranges => namespace 이름
	auto ret2 = std::ranges::find(v.begin(), v.end(), 3);
	auto ret3 = std::ranges::find(v, 3);
}