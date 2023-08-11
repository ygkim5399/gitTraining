#ifndef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;


// 단항(unary) 함수 : 인자가 1개인 함수
// 이항(binary) 함수 : 인자가 2개인 함수

int foo(int a, int b) { return a + b; }


int main()
{
	std::list<int> s1 = { 1,2,3,4,5};
	std::list<int> s2 = { 6,7,8,9,10};
	std::list<int> s3;
	/*
	// transform 알고리즘
	std::transform(s1.begin(), s1.end(),	// 1. 이 구간의 모든 요소를
					s2.begin(),				// 2. 이 구간의 요소와 함께
					std::back_inserter(s3),	// 4. 이 곳에 넣어달라
					//s3.begin(), // error (s3 가 비어있으므로 runtime error)
					foo);					// 5. 이함수에 보낸 후 반환값을

	show(s3);
	*/
	// transform 알고리즘 이항함수를 lambda 표현식으로 해보세요

	std::transform(s1.begin(), s1.end(),	// 1. 이 구간의 모든 요소를
		s2.begin(),							// 2. 이 구간의 요소와 함께
		std::back_inserter(s3),				// 4. 이 곳에 넣어달라
		//s3.begin(), // error (s3 가 비어있으므로 runtime error)
		[](int a, int b) {return a + b; });	// 5. 이함수에 보낸 후 반환값을

	return 0;
}



















//
#endif