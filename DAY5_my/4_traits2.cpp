#ifndef DAY5

#include <iostream>

// type traits : Ÿ�� T �� ���� �پ��� ������ ���� �� ����ϴ� ���̺귯��
#include <type_traits>	// c++11 ���� ����

// �Ʒ� �ڵ�� T�� ���������� �����ϴ� �ڵ��Դϴ�.
//template <typename T> struct is_pointer {
//	enum {value = false};
//};
//template <typename T> struct is_pointer<T*> {
//	enum { value = true };
//};
// �ٽ� : template �κ� Ư��ȭ��� �������� ������ �����ϴ� ��� value = true

template<typename T> void foo(const T& b)
{
	//	T : int, int*

	if (std::is_pointer<T>::value)
		std::cout << "������" << std::endl;
	else
		std::cout << "������ �ƴ�" << std::endl;
	
}

int main()
{
	int n = 10;

	foo(n);
	foo(&n);
}

#endif