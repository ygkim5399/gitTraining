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
	auto ret1 = std::find(s.begin(), s.end(), 30);

	std::cout << *ret1 << std::endl; // 30!

}

