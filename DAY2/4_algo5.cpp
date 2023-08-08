#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	// vector 에서 특정 요소를 제거하는 방법
	// => 전통적으로는 아래 방법 사용 
	// => 아래 코드가 아주 유명한 방식 입니다( erase remove idioms)
//	v.erase(std::remove(v.begin(), v.end(), 3), v.end());

	// C++20 부터는 아래 처럼 해도 됩니다.
	// => 컨테이너 전달!!
	std::erase(v, 3); // vector 버전
	std::erase(s, 3); // list 버전 등
						// 모든 컨테이너에 대해서 따로 제공합니다.

	show(v);
	show(s);

	// reverse는 아래 버전이 있습니다.
//	std::ranges::reverse(v);
//	std::ranges::reverse(s);
}

