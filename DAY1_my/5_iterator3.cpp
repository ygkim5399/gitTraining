#ifndef DEBUG


#include <iostream>
#include <list>   
#include <vector>

int main()
{
	std::list<int> s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// 1. 반복자의 정확한 타입
	std::list<int>::iterator p1 = s.begin();
	// 단, 정확한 타입을 사용하는것을 권장하지는 않습니다.
	// -> 컨테이너 변경 시 위의 코드도 변경된다.
	// -> 코드가 복잡해 보입니다.


	// 권장 : auto 를 사용
	//auto p1 = s.begin();

	// 반복자를 꺼내는 법
	int s[5] = { 1,2,3,4,5 };
	//auto p2 = s.begin(); // c++ 98 스타일
						// s 가 배열이라면 error

	auto p2 = std::begin(s); // c++11 에서 추가된 방법
							 // s가 raw array 라도 사용가능
}





#endif