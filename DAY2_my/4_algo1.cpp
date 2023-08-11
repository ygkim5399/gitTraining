#ifndef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;

// 알고리즘의 일반적인 의미
// -> 문제를 해결하는 방법 이라는 의미
// 
// STL 에서 알고리즘이라는 용어의 의미
// -> std::find같이 멤버가 아닌 일반함수(템플릿) 을 부르는 용어
// -> <algorithm> 헤더 필요

// 100 여개 이상의 표준 알고리즘(일반함수 템플릿) 제공
// 

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int> s = { 1,2,3,1,2,3,1,2,3,1 };


	// v와 s 에서 3을 찾고 싶다.

	// 1. 멤버함수 find 를 제공한다면
	// -> 사용하기 쉽다. 코드가 단순해보인다. 
	// -> 모든 컨테이너에 동일한 구현을 가진 find 가 필요하다. 
	// -> find 알고리즘이 update 되면 모든 컨테이너를 변경해야한다.
	// java 등의 다른언어는 아래 방식이지만 c++ stl 은 이방식을 사용하지 않는다.
	//auto ret1 = v.find(3);
	//auto ret2 = s.find(3);


	// 2. find 를 멤버가 아닌 일반 함수 템플릿으로 제공한다면
	// -> 모든 컨테이너에서 사용가능하다.
	// find 의 구현이 update 되어도 한 개만 수정하면 된다. 
	// 단, 사용자 입장에서는 사용하기에 어려워 보인다. 

	auto p1 = std::find(v.begin(), v.end(), 3);
	auto p2 = std::find(s.begin(), s.end(), 3);

	// 주의 : 검색실패는 항상 검색 구간의 끝과 비교해야 합니다.
	// 검색 성공시 : 요소를 가리키는 반복자 반환
	// 검색 실패시 : 구간의 끝 (find의 2번째 인자)
	if (p2 == s.end()) {
		// 검색 실패
	}
	else {
		// 검색 성공
	}


	return 0;
}



















//
#endif