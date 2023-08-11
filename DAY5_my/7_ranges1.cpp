#ifndef DAY5

#include <iostream>
#include <vector>
#include <algorithm>
//#include <ranges> 

int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };


	for (auto e : v)
		std::cout << e << ", ";

	// 위 for 문을 보고 컴파일러가 아래 코드를 생성합니다.
	// -> C#, python, rust 등 대부분의 언어가 유사합니다.
	// -> 결국 반복자로 하는것!!

	auto first	= v.begin(); // 또는 std::begin(v);
	auto last	= v.end();
	for (; first != last; ++first) {
		auto e = *first;
		//===========
		std::cout << e << ", ";
	}

}


#endif