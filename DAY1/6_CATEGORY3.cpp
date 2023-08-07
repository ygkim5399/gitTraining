#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::begin(s);

	// 반복자 p를 5칸 전진하고 싶다.
//	p = p + 5;	// 임의 접근 반복자만 가능(vector 반복자)	
				// 그외에는 에러

//	++p; ++p; ++p; ++p; ++p; // 모든 반복자 사용가능.
							 // 그런데, p가 임의 접근이었다면 성능저하

	// 해결책.
	std::advance(p, 5);		// p가 임의 접근 이라면 p+5로 이동
							// 임의 접근이 아니면 ++로 이동..
							// 반복자를 이동하는 최선의 코드

	
	std::cout << *p << std::endl;
}