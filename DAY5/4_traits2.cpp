#include <iostream>

// �Ʒ� �ڵ尡 T �� ������ ���� �����ϴ� �ڵ� �Դϴ�.
template<typename T> struct is_pointer
{
	enum { value = false };
};

template<typename T> void foo(const T& b)
{
	// T : int,  int*
	if ( is_pointer<T>::value )
		std::cout << "������" << std::endl;
	else
		std::cout << "������ �ƴ�" << std::endl;
	
}

int main()
{
	int n = 10;

	printv(n);
	printv(&n);
}

