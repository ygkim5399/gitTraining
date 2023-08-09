#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity 개념
int main()
{
	std::vector<int> v(10, 0);

	v.resize(7);	// 크기 줄이는 코드...어떻게 구현했을까요 ?
					// => 기존 메모리 계속 사용하고
					// => size 변수만 변경합니다.

	std::cout << v.size() << std::endl;		// 7
	std::cout << v.capacity() << std::endl;	// 10
					

	
}




