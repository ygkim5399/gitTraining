#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::begin(s);

	
	auto p2 = std::next(p, 5); // p ���� 5ĭ �̵��� ���� �ݺ��� ��ȯ

	std::cout << *p << std::endl;
	std::cout << *p2 << std::endl;

	std::advance(p, 5);			// p��ü�� 5ĭ �̵�
}