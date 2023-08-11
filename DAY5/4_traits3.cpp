#include <iostream>
#include <type_traits>

// traits �� ����
// 1. Ÿ���� Ư�� ���� : std::is_xxx<T>::value
// 2. ���� Ÿ�� ���   : typename std::remove_pointer<T>::type

template<typename T> void foo(const T& b)
{
	// ���� T : int, int*
	typename std::remove_pointer<T>::type n;

	std::cout << typeid(n).name() << std::endl; // ���� �ڵ忡�� n�� �׻� int
}

int main()
{
	int n = 10;

	foo(n);
	foo(&n);
}

