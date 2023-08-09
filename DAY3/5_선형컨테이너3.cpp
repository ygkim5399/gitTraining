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

	std::cout << v.size()     << std::endl;	// 7
	std::cout << v.capacity() << std::endl;	// 10

	v.push_back(5); // 끝에 한개(5) 추가
					// capacity > size 이므로
					// 이 연산은 메모리 재할당이 필요 없습니다
					// 아주 빠르게 동작합니다.

	std::cout << v.size() << std::endl;	    // 8
	std::cout << v.capacity() << std::endl;	// 10					

	v.shrink_to_fit(); // size == capacity 로 해달라
					   // 결국 이순간 8개 크기 메모리 재할당해서 사용

	std::cout << v.size() << std::endl;	    // 8
	std::cout << v.capacity() << std::endl;	// 8	
	
}




