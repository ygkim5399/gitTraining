// print.cpp
#include <iostream>
#include <print>  // C++23 ���� ���Ե˴ϴ�.
					// g++ ���� ���� �ȵ˴ϴ�.
					// visual studio 2022 preview ���� ���� �˴ϴ�.
				
int main()
{
	// std::cout �� 
	// 1. �ʹ� �ⱳ�� ���� ���Ǿ���
	// 2. �ӵ��� ������
	// 3. �ڵ尡 "��Ȳ��" ���̰� �˴ϴ�.

	std::cout << std::endl;  // endl �� �Լ��Դϴ�.
	std::endl(std::cout);    // �� �ڵ�� �� �ڵ�� �����մϴ�

//	std::cout.operator<<(&std::endl);

	std::print("{0}, {1}, {0:x}", 10, 3.4);
	std::println("{0}, {1}, {0:x}", 10, 3.4);
}