#ifndef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;


// 조건자 (predicator) : 반환 타입이 bool 인 함수
// 단항 조건자 : 인자가 한개인 조건자

// find_if 의 3번째 인자는 "unary predicator(단항조건자)" 이어야합니다. 

bool foo(int a) {
	return a % 3 == 0;
}

int main()
{
	//std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// std::find	: 값 검색
	// std::find_if : 조건 검색

	// 주어진 구간에서 3을 찾고 싶다
	auto p1 = std::find(v.begin(), v.end(), 3);

	// 주어진 구간에서 3배수를 찾고 싶다
	auto p2 = std::find_if(v.begin(), v.end(), foo);

	//auto p2 = std::find_if(v.begin(), v.end(), [](int a) {return a % 3 == 0; });

	cout << *p2 << endl;

	return 0;
}



















//
#endif