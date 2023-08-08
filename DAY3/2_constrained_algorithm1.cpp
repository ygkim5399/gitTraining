#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

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

template<typename C >
void mysort(C& c)
{
	std::cout << "Container" << std::endl;
}

template<typename C, typename CMP >
void mysort(C& c, CMP cmp)
{
	std::cout << "Container, cmp" << std::endl;
}

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// �ݺ��� ����
	mysort(v.begin(), v.end());
	mysort(v.begin(), v.end(), std::less<int>());

	// �����̳� ����
	mysort(v);
	mysort(v, std::less<int>());
}