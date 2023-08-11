
#ifndef DAY4

#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include "show.h"

using namespace std::placeholders;

bool foo(int a, int b) {
	return a % b == 0;
}

int main()
{
	std::vector<int> v = { 1,2,6,5,4 };
	int k = 3;

	// 주어진 구간에서 k 의 배수를 찾고 싶다
	//auto ret = std::find_if(v.begin(), v.end(), foo ); // error
					// -> find_if 는 3번째 인자로 단항함수를 요구
					// 그런데 foo 는 2항 함수

	auto ret = std::find_if(v.begin(), v.end(), std::bind(&foo, _1, k)); 
	std::cout << *ret << std::endl;

	// 위 처럼 조건자를 일반함수로 만들어서 std::bind() 해도 되지만
	// 위같은 예제는 차라리 "람다표현식"을 사용하는 것을 권장합니다. ( inline 치환성을 보장못하고 + a ) 
}

















//












//
#endif