#include <iostream>
#include <iterator>
#include <list>

int main()
{
	int n = 10;

	// ȭ�� ��¹�� 1. std::cout ���
	std::cout << n << std::endl;


	// ȭ�� ��� ��� 2. stream �ݺ��� ���
	std::ostream_iterator<int> p(std::cout, ", ");

	*p = 20; // �̼���  std::cout << 20 << ", "
	*p = 30; //         std::cout << 30 << ", "


	std::list<int> s = { 1,2,3 };


}