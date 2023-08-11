#ifndef DAY4

#include <iostream>
#include <unordered_set>
#include "show.h"

// unordered_set 


// set				: tree 구조, 정렬을 유지하고, 검색이 빠르다.
// unordered_set	: hash 구조, 정렬을 유지하지 않고, 검색이 빠르다.
// 일반적인 데이터라면 tree 보다 hash 가 빠르다. 정렬이 필요없는 경우

// 이름을 그냥 "hash_set" 이라고 하면 안되나요??
// -> c++ 은 "구현방법을 강제하지" 는 않습니다. 


int main()
{
	// 1. c++ 표준 해쉬함수 - 함수 객체로 제공됩니다.
	std::hash<int> hi;
	std::hash<double> hd;
	std::hash<std::string> hs;

	// 해쉬함수에 데이터를 넣으면 고유한 번호(저장할 바구니 정보)를 알려줍니다. 

	std::cout << hi(10) << std::endl;
	std::cout << hd(3.5) << std::endl;
	std::cout << hs("hello") << std::endl;
	std::cout << hs("hello") << std::endl; // 동일 데이터가 전달되면
											// 동일번호가 나와야합니다.


}



#endif