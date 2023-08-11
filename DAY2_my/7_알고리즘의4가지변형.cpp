#ifdef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"



int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// 1. 기본버전 (in place, 값 버전)
	auto p1 = std::remove(v1.begin(), v1.end(), 3);


	// 2. 조건자 버전 : _if, 마지막 인자가 "함수 또는 람다표현식"
	//auto p1 = std::remove_if(v1.begin(), v1.end(),
	//						[](int n) {return n % 2 == 1; });

	// 3. 복사 버전 : _copy
	// 주의 : 반환값 p1 은 v2 의 반복자입니다. 
	//auto p1 = std::remove_copy(v1.begin(), v1.end(),
	//							v2.begin(), 3);
	// v1 = same
	// v2 = 1,2, 4,5,6,7,8,9,10,0

	// 1. v1 -> v2 에 먼저 복사하고 v2 를 remove 하면 되는데
	// 2.. 왜 remove_copy 를 별도로 제공하나요? 
	// -> 복사 후 remove 하는 2번연산보다 효율적

	// 질문 : sort_copy() 는 별도로 있을까요?
	// -> sort() 와 copy() 는 아주 많은 성능차이가 있다.
	// -> copy() 후 sort() 해도 sort_copy() 에 비해서 많이 느리지 않다.


	// 4. 복사 조건자 버전 : _copy_if
	//auto p1 = std::remove_copy_if(v1.begin(), v1.end(), v2.begin(), 
	//							[](int n) {return n % 2 == 1; });
	//
	//// 질문 : 모든 짝수를 찾고싶다
	//// find_if 는 한개만 찾는데 모든것을 찾을 수 는 없나요?
	//std::vector<int> result;
	//std::remove_copy_if(v1.begin(), v1.end(), std::back_inserter(result),
	//					[](int n) {return n % 2 == 1; });
	//show(p1);
	//show(v2);
}

#endif