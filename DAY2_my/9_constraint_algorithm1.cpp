
#ifndef DAY2

#include <iostream>
#include <functional>
#include <vector>

template<typename T>
void mysort(T first, T last)
{
	std::cout << "first, last" << std::endl;
}

template<typename T, typename CMP >
void mysort(T first, T last, CMP cmp)
{
	std::cout << "first, last, cmp" << std::endl;
}

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 반복자 버전
	mysort(v.begin(), v.end());
	mysort(v.begin(), v.end(), std::less<int>() );


}

#endif