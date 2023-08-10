#include <iostream>
#include <unordered_set>
#include "show.h"

// set           : tree 구조, 정렬을 유지하고, 검색이 빠르다.
// unordered_set : hash 구조, 정렬을 유지하지 않고, 검색이 빠르다.

// 이름을 그냥 "hash_set" 이라고 하면 안되나요 ??
// => C++ 은 "구현방법을 강제 하지" 는 않습니다.

int main()
{
	// 1. C++ 표준 해쉬 함수 - 함수 객체로 제공됩니다.
	std::hash<int> hi;
	std::hash<double> hd;
	std::hash<std::string> hs;

	// 해쉬함수에 데이타를 넣으면 고유한 번호(저장할 바구니 정보)를 알려 줍니다.

	std::cout << hi(10) << std::endl;
	std::cout << hd(3.4) << std::endl;
	std::cout << hs("hello") << std::endl; 
	std::cout << hs("hello") << std::endl;  // 동일 데이타가 전달되면
											// 동일 번호가 나와야 합니다.
					
}

