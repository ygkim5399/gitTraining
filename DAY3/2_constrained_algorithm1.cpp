#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>



template<typename T, typename CMP >
void mysort(T first, T last, CMP cmp)
{
	std::cout << "first, last, cmp" << std::endl;
}

template<typename C >
void mysort(C& c)
{
	std::cout << "Container" << std::endl;
}

// C++20 의 해결책
template<typename C, typename CMP > requires std::ranges::range<C>
void mysort(C& c, CMP cmp)
{
	std::cout << "Container, cmp" << std::endl;
}

template<typename T>	requires std::random_access_iterator<T>
void mysort(T first, T last)
{
	std::cout << "first, last" << std::endl;
}



int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 반복자 버전
	mysort(v.begin(), v.end());						// 1
	mysort(v.begin(), v.end(), std::less<int>());	// 2

	// 컨테이너 버전
	mysort(v);										// 3
	mysort(v, std::less<int>() );					// 4

	// C++98 시절 : 1, 4번의 함수에서 충돌이 발생합니다.
	//				템플릿 인데, 인자의 갯수가 동일
	//				그래서, 알고리즘의 컨테이너 버전을 만들수 없었습니다.

	// C++20 : Concept, requires 문법으로 해결 가능합니다.
}