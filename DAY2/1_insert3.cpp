#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	std::list<int> s1 = { 0, 0, 0, 0, 0 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	// 아래 2줄 차이점 잘 알아 두세요
	std::copy(v.begin(), v.end(), s1.begin()); 
							// v 의 모든 요소를 s1에 덮어쓴것

	std::copy(v.begin(), v.end(), std::back_inserter(s2));
							// v 의 모든 요소를 s2에 끝에 추가


	for (auto e : s1)
		std::cout << e << ", ";
	std::cout << "\n";

	for (auto e : s2)
		std::cout << e << ", ";

}