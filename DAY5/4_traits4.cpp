#include <iostream>

// �ٽ� ����
// 1. type traits ����ϱ� ���� ���.
#include <type_traits>

// C++14 ���� �Ʒ� �ڵ� ����
// template<typename T>
// using remove_pointer_t = typename std::remove_pointer<T>::type;

template<typename T> void foo(const T& b)
{
	// 2. ����
	bool b1 = std::is_pointer<T>::value; // C++11
	bool b2 = std::is_pointer_v<T>;      // C++17


	// 3. ������ Ÿ�� ���
	typename std::remove_pointer<T>::type n1;	// C++11

	std::remove_pointer_t<T> n2;				// C++14
}

int main()
{
	int n = 10;

	foo(n);
	foo(&n);
}

