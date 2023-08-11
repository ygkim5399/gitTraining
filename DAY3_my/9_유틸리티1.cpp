#ifndef DAY3

#include <iostream>
#include "show.h"

template<typename T> void foo(T a) {}

int main()
{
	// pair : ���δٸ� Ÿ�� 2���� �����ϴ� ����ü
	std::pair<int, double> p1(1, 3.4);

	auto p1 = p1.first; // 1
	auto p2 = p1.second; // 3.4

	// 2. pair �� ����� ���
	std::pair<int, double>	p2(1, 3.4);
	std::pair				p3(1, 3.4); // c++17 ���ʹ� Ÿ�Ի�������

	// c++17 �����̶� pair �� ����� �Լ� ���ø��� ����ϸ� 
	// Ÿ������ ��������
	auto p4 = std::make_pair(1, 3.4); 

	// �Լ� ���ڷ� pair �������� �Ʒ� ó���ϸ� ���մϴ�.
	foo(std::make_pair(1, 3.4));

}



#endif