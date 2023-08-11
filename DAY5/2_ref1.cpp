#include <iostream>
#include <functional>

// C++ reference : �̵� �Ұ����� ����
//				   int& r = n ���� �ʱ�ȭ �Ǹ� r�� ��� n�� �����ϰԵ�
//				   ���� �����, ������ �ƴ� "������ ����Ű�� ��"�� �̵�

// std::reference_wrapper : �̵������� ����
int main()
{
	int n1 = 10;
	int n2 = 20;

//	int& r1 = n1;  
//	int& r2 = n2;

	std::reference_wrapper<int> r1 = n1;
	std::reference_wrapper<int> r2 = n2;

	r1 = r2;	// �̼����� ���� ����� ������ ������

	// ��� ������ ������				// int&		reference_wrapper
	std::cout << n1 << std::endl;	// 20		10
	std::cout << n2 << std::endl;	// 20		20
	std::cout << r1 << std::endl;	// 20		20
	std::cout << r2 << std::endl;	// 20		20
}

