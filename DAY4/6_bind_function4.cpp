#include <iostream>
#include <algorithm>
#include <functional> // std::bind, std::function
#include <vector>
using namespace std::placeholders;

bool foo(int a, int b)
{
	return a % b == 0;
}

int main()
{
	std::vector<int> v = { 1,2,6,5,4 };

	int k = 3;

	// 주어진 구간에서 k이 배수를 찾고 싶다.
//	auto ret = std::find_if(v.begin(), v.end(), foo ); // error
					// => find_if 는 3번째 인자로 단항함수를 요구
					// => 그런데, foo 는 2항 함수
					
	auto ret = std::find_if(v.begin(), v.end(), std::bind(&foo, _1, k)   );

	std::cout << *ret << std::endl;
}

















//












//
