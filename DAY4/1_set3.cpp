#include <iostream>
#include "show.h"

#include <set> 

int main()
{
	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);

	// 아래 코드를 평가해 보세요.. good ? bad ?
	// std::find : 선형 검색
	//             s.begin() 부터 ++로 이동하면서 검색
	auto ret1 = std::find(s.begin(), s.end(), 30);

	std::cout << *ret1 << std::endl; // 30!

	// set 을 사용하는 이유는 "root" 부터 이진검색하기 위해서 입니다.
	// 위 코드 보다는 아래 코드가 빠릅니다.
	// "알고리즘과 동일한 이름의 멤버 함수가 있다면 
	//  멤버 함수를 사용해라"

	auto ret2 = s.find(30); // 이진 검색!!

	std::cout << *ret2 << std::endl;

}

