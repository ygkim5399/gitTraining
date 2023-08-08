#include <iostream>
#include <iterator>
#include <list>

int main()
{
	int n = 10;

	// 화면 출력방법 1. std::cout 사용
	std::cout << n << std::endl;


	// 화면 출력 방법 2. stream 반복자 사용
	std::ostream_iterator<int> p(std::cout, ", ");

	*p = 20; // 이순간  std::cout << 20 << ", "
	*p = 30; //         std::cout << 30 << ", "


	std::list<int> s = { 1,2,3 };

	// 스트림 반복자 덕분에 컨테이너의 모든 요소 출력도 
	// std::copy로 가능합니다.
	std::copy(s.begin(), s.end(), p);

}