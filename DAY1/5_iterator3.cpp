#include <iostream>
#include <list>   
#include <vector>

int main()
{
//	std::list<int> s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };
	int s[5] = { 1,2,3,4,5 };

	// 1. 반복자의 정확한 타입.
	// 단, 정확한 타입을 사용하는 것을 권장하지 않습니다
	// => 컨테이너 변경시 아래 코드도 변경됩니다.
	// => 코드가 복잡해 보입니다.
//	std::list<int>::iterator p1 = s.begin();

	// 권장 : auto 사용하세요..
//	auto p1 = s.begin();


	// 2. 반복자를 꺼내는 법
//	auto p2 = s.begin(); // C++98 스타일 
						 // s가 배열이라면 error

	auto p2 = std::begin(s); // C++11 에서 추가된 방법
							 // s 가 raw array 라도 사용가능
}



