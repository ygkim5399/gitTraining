#include <iostream>
#include <list>

// �־��� ���� [first ~ last) �� ���� ���ϴ� sum �Լ��� ����� ���ô�.
template<typename T>
? sum(T first, T last)
{
	? s = 0;

	while (first != last)
	{
		s += *first;
		++first;
	}
	return s;
}


int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int n = sum(std::begin(s), std::end(s));

	std::cout << n << std::endl; // 55
}