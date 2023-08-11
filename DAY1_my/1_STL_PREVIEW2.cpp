// 1_STL_PREVIEW1
#include <iostream>
#include <list>

int main()
{
	// STL 의 linked list => 컨테이너
	std::list<int> s;
	s.push_back(10);
	s.push_back(20);
	s.push_back(30);

	// list 를 만드는 2가지 방법
	std::list<int> s1 = { 1,2,3 }; // c++ 14 까지
	//std::list      s2 = { 1,2,3 }; // c++ 17부터는 type 생략가능
}