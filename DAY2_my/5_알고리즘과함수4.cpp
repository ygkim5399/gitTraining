#ifndef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;


bool foo(int a) {
	return a % 3 == 0;
}



int main()
{
	//std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };


	auto p1 = std::find_if(v.begin(), v.end(), foo);
	auto p2 = std::find_if(v.begin(), v.end(), [](int a) {return a % 3 == 0; });

	int k = 3; // 사용자가 입력한 값이라고 가정

	// 주어진 구간에서 k의 배수를 찾고싶다.
	// -> foo 함수를 어떻게 만들어야 할까요? 
	//	단 gfoo 를 find_if 에 보내려면 인자는 한개이어야 합니다.
	// -> 전역변수가 도입되어야 합니다. 

	//auto p1 = std::find_if(v.begin(), v.end(), foo(k));
	
	// -> 람다 표현식은 "지역변수를 캡쳐"할 수 있으므로 쉽게 할 수 있습니다. 
	auto p2 = std::find_if(v.begin(), v.end(), [k](int a) {return a % k == 0; });


	// find_of 인자로 일반함수(foo) 를 사용하면
	// -> 단항 함수만 보낼 수 있습니다.

	// find_of 인자로 람다표현식을 사용하면
	// -> 단항함수 + main 의 지역변수를 같이 전달 가능합니다.
	// -> 이것을 클러져(closure) 라고 합니다. 

	// 클로져 (closure)
	// -> 문맥에 속한 지역변수를 캡쳐할 수 있는 기능을 가진 함수


	return 0;
}



















//
#endif