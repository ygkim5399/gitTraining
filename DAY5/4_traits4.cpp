#include <iostream>

// 핵심 정리
// 1. type traits 사용하기 위한 헤더.
#include <type_traits>

// C++14 부터 아래 코드 제공
// template<typename T>
// using remove_pointer_t = typename std::remove_pointer<T>::type;

template<typename T> void foo(const T& b)
{
	// 2. 조사
	bool b1 = std::is_pointer<T>::value; // C++11
	bool b2 = std::is_pointer_v<T>;      // C++17


	// 3. 변형된 타입 얻기
	typename std::remove_pointer<T>::type n1;	// C++11

	std::remove_pointer_t<T> n2;				// C++14
}

int main()
{
	int n = 10;

	foo(n);
	foo(&n);
}

