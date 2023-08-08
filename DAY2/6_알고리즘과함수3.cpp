#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 조건자(predicator) : 반환 타입이 bool 인 함수
// 단항 조건자 : 인자가 한개인 조건자

// find_if 의 3번째 인자는 "unary predicator" 이어야 합니다.

bool foo(int n) { return n % 3 == 0; }


int main()
{
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// std::find    : 값 검색		3번째 인자가 값
	// std::find_if : 조건 검색		3번째 인자가 함수

	// 주어진 구간에서 3을 찾고 싶다.
	auto p1 = std::find(v.begin(), v.end(), 3);

	// 주어진 구간에서 "3배수" 를 찾고 싶다.
	auto p2 = std::find_if(v.begin(), v.end(), foo );

	std::cout << *p2 << std::endl; // 6

}



















//
