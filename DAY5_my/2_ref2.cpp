#ifndef DAY5
#include <iostream>
#include <functional>

//			n1		n2	
//value :	10		20
//add	:	100		200
//
//
//r1 �� n1�� ����ų ��, r1���ο� �����ͷ� 100���� ����Ŵ
// r1 = r2 �� ��, r1 �� �����Ͱ�  200������ ����

// reference_wrapper �� ��Ȯ�� ����
// 1. �ᱹ ���������� �����͸� �����ϴ� ��
// 2. ����/���� ����� "������ ó�� ����"
// 3. raw reference �� ��ȯ ���� 


// c++ ǥ���� reference_wrapper �� ����� ���ô�.
template <typename T>
class reference_wrapper {
	T* obj;
public:
	reference_wrapper(T& r) : obj(&r) {}

	// ��ȯ ������ : ��ü�� �ٸ�Ÿ������ ��ȯ�� �ʿ��� ��,
	operator T& () { return *obj; }
};


int main()
{
	int n1 = 10;
	int n2 = 20;


	std::reference_wrapper<int> r1 = n1;
	std::reference_wrapper<int> r2 = n2;

	r1 = r2;	
	
	// reference_wrapper -> int& �� ȣȯ�����ϰ�
	int& r = r1;	// r1.operator int&() �Լ� �ʿ�

	std::cout << n2 << std::endl;
	std::cout << r2 << std::endl;// cout << r2.operator int&() �� ������ ��°���
	std::cout << n1 << std::endl;
	std::cout << r1 << std::endl;
}


#endif