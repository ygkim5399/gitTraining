#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 0,0,0,0,0 };

	int x[5] = { 1, 2, 3, 4, 5 };
	int y[5] = { 0, 0, 0, 0, 0 };
	
	// x의 요소를 => y에 덮어쓰기
	// 방법 1. for 문
	for (int i = 0; i < 5; i++)
		y[i] = x[i];

	// 방법 2. std::copy() 알고리즘 사용
	std::copy(x, x + 5, y);
	std::copy(x, x + 5, s.begin());

	// 참고. 컨테이너 출력은 C++11 range-for 가 가장 좋습니다.
	for (auto e : s)
	{
		std::cout << e << ", ";
	}
}