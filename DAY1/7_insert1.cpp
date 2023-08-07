#include <iostream>
#include <list>
#include <iterator>

int main()
{
	std::list<int> s = { 1, 2, 3, 4, 5};

	// �����̳ʿ� ��Ҹ� �߰��Ϸ���
	// ��� 1. ��� �Լ� push_back() ���
	s.push_back(10);


	// ��� 2. ���� �ݺ��� ���
	std::back_insert_iterator bi(s);

	*bi = 20;	// s.push_back(20)
	*bi = 30;	// s.push_back(30)

	for (auto e : s)
	{
		std::cout << e << std::endl;
	}
}
