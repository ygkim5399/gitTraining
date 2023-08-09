#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "show.h"

// 컨테이너를 보관하는 컨테이너

int main()
{
	// 1. int 를 보관하는 vector
	std::vector<int> v1(10, 0);
	v1[0] = 10;


	// 2. 컨테이너를 보관하는 컨테이너를 사용하면
	// => 복잡한 자료구조를 한번에 만들수 있습니다.
	std::vector<std::vector<int>> v2(10, std::vector<int>(10));
	
	v2[0][0] = 0;


	std::vector<std::list<int>> v3(10);
	
	v3[0].push_back(1);
	v3[0].push_back(2);

	v3[1].push_back(10);
	v3[1].push_back(20);
}