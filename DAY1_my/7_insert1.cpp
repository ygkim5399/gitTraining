#ifndef DEBUG

#include <iostream>
#include <list>
#include <iterator>


// 핵심 : 삽입반복자의 개념
// -> s.begin() 으로 꺼내는것이 아니라
// -> 독립적으로 만들어서 사용하는 반복자
// -> 컨테이너에 삽입할 때 사용

int main(int argc, char** argv)
{
	std::list<int> s = { 1, 2, 3, 4, 5};

	/* 컨테이너에 요소를 추가하려면 
	방법1 . 멤버함수 push_back() 사용
	*/
	s.push_back(10);
	// 방법2. 삽입 반복자 사용
	std::back_insert_iterator bi(s); // c++17

	*bi = 20; // s.push_back(20)
	*bi = 30; // s.push_back(30)
	for (auto e : s) {
		std::cout << e << std::endl;
	}

	// 방법3
	std::back_insert_iterator<std::list<int>> bi2(s); // C++17 이전
}


#endif