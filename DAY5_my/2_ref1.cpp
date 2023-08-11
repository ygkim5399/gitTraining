#ifndef DAY5
#include <iostream>
#include <functional>

// c++ reference	: �̵��Ұ����� ����
//						int& r = n ���� �ʱ�ȭ �Ǹ� r �� ��� n �� �����ϰ� ��
//						���Կ��� ��, ������ �ƴ� ������ ����Ű�� "��"�� �̵�

// std::reference_wrapper : �̵������� ����

int main()
{
	int n1 = 10;
	int n2 = 20;

	//int& r1 = n1;  
	//int& r2 = n2;


	std::reference_wrapper<int> r1 = n1;
	std::reference_wrapper<int> r2 = n2;

	r1 = r2;	// �̼����� ���� ����� ������ ������
				// reference �̵� vs ���� �̵� 
				// ���� �̵�

	// ��� ������ ������			// int&		reference_wrapper
	std::cout << n2 << std::endl;	// 20			10
	std::cout << r2 << std::endl; 	// 20			20
	std::cout << n1 << std::endl;	// 20			20
	std::cout << r1 << std::endl; 	// 20			20
}


#endif