#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 0,0,0,0,0 };

	int x[5] = { 1, 2, 3, 4, 5 };
	int y[5] = { 0, 0, 0, 0, 0 };
	
	// x�� ��Ҹ� => y�� �����
	// ��� 1. for ��
	for (int i = 0; i < 5; i++)
		y[i] = x[i];

	// ��� 2. std::copy() �˰��� ���
	std::copy(x, x + 5, y);
	std::copy(x, x + 5, s.begin());

	// ����. �����̳� ����� C++11 range-for �� ���� �����ϴ�.
	for (auto e : s)
	{
		std::cout << e << ", ";
	}
}