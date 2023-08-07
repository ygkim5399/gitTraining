#include <iostream>
#include <list>
#include <iterator>

int main()
{
	std::list<int> s = { 1, 2, 3, 4, 5};

	// 컨테이너에 요소를 추가하려면
	// 방법 1. 멤버 함수 push_back() 사용
	s.push_back(10);


	// 방법 2. 삽입 반복자 사용
	std::back_insert_iterator bi(s);

	*bi = 20;	// s.push_back(20)
	*bi = 30;	// s.push_back(30)

	for (auto e : s)
	{
		std::cout << e << std::endl;
	}
}
