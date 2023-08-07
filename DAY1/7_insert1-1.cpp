#include <iostream>
#include <list>
#include <iterator>

// 핵심 : 삽입반복자를 만드는 3가지 방법

// 


int main()
{
	std::list<int> s = { 1, 2, 3, 4, 5 };


	std::back_insert_iterator bi1(s); // C++17


	std::back_insert_iterator< std::list<int> > bi2(s); // C++17 이전

}
