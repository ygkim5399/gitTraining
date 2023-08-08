#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 핵심 : 알고리즘은 컨테이너를 알지 못한다.

template<typename T1, typename T2>
T1 remove(T1 first, T1 last, const T2& value)
{
	// first, last 가 반복자 라는 것만 알 뿐입니다.
	// 즉, ++ 와 * 연산을 사용
	// first, last 가 어떤 컨테이너(vector, list등)인지는 알수 없습니다.

	// 따라서, 컨테이너의 메모리 자체를 제거하거나 줄일수는 없습니다.
	
	// value 를 찾으면 뒤의 요소를 앞으로 이동해 놓는 원리 입니다.
}


int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	/*
	// std::remove : 주어진 구간에서 특정 요소(3) 를 제거
	// 반환값 p : 유효한 요소의 다음(남아 있던 요소의 처음)을 가리키는
	//			 반복자
	auto p = std::remove(v.begin(), v.end(), 3);

	show(v);  
	// 컨테이너의 메모리 자체를 줄일때는 
	// 일반함수가 아닌 컨테이너의 멤버 함수를 사용해야 합니다.
	v.erase(p, v.end());

	show(v);
	*/
	// vector 에서 특정 요소를 제거하는 위와 같은 코드는
	// 나쁜 구현이 아닙니다. C로 구현해도 위와 같이 만들게 됩니다.

	// 위 코드를 보통 아래 처럼 한줄로 표현합니다.
	// 흔히 아래 기술을 "erase - remove idioms" 라고 부릅니다.
	v.erase(std::remove(v.begin(), v.end(), 3), v.end());

	show(v);
}



















//
