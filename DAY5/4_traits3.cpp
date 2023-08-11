#include <iostream>
#include <type_traits>

// traits 의 종류
// 1. 타입의 특성 조사 : std::is_xxx<T>::value
// 2. 변형 타입 얻기   : typename std::remove_pointer<T>::type

template<typename T> void foo(const T& b)
{
	// 현재 T : int, int*
	typename std::remove_pointer<T>::type n;

	std::cout << typeid(n).name() << std::endl; // 현재 코드에서 n은 항상 int
}

int main()
{
	int n = 10;

	foo(n);
	foo(&n);
}

