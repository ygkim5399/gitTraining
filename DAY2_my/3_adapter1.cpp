#ifndef DAY2


#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10};

	auto p1 = s.begin();
	auto p2 = std::next(p1, 5);


	// reverse_iterator : ++ 연산 시 " 거꾸로 동작" 하는 반복자
	// std::reverse_iterator< 반복자타입 > p3( 반복자 );

	std::reverse_iterator<std::list<int>::iterator> p3(p2); //p3 는 p2-1 위치로 초기회 됩니다. 
	
	std::cout << *p3 << std::endl; // 5
	++p3;
	std::cout << *p3 << std::endl; //4
}

#endif