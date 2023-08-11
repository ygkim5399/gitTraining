#ifndef DEBUG

#include <iostream>
#include <list>
#include <iterator>


// 핵심 : 삽입반복자를 만드는 3가지 방법

template <typename T>
std::back_insert_iterator<T> xback_inserter(T& c) {
	return std::back_insert_iterator<T>(c);
}

int main(int argc, char** argv)
{
	std::list<int> s = { 1, 2, 3, 4, 5 };

	/* 컨테이너에 요소를 추가하려면
	방법1 . 멤버함수 push_back() 사용
	*/
	s.push_back(10);
	// 방법2. 삽입 반복자 사용
	std::back_insert_iterator bi(s); // c++17


	// 방법3
	std::back_insert_iterator<std::list<int>> bi2(s); // C++17 이전
	// -> 함수버전을 사용해서..
	auto bi3 = xback_inserter(s); // 타입을 전달하지 않아도 ok


	//// 질문


	*bi = 20; // *사용한 후

	++bi; // ++ 해도되고 안해도됩니다.
			// 사실 ++은 아무일도 하지 않습니다. 
			// 하지만 std::copy 등으로 보내려면 ++은 아무일도 안하더라도 되긴해야합니다.

	*bi = 30;


}


#endif