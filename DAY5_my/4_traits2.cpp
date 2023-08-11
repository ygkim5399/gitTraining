#ifndef DAY5

#include <iostream>

// type traits : 타입 T 에 대한 다양한 정보를 얻을 때 사용하는 라이브러리
#include <type_traits>	// c++11 부터 제공

// 아래 코드는 T가 포인터인지 조사하는 코드입니다.
//template <typename T> struct is_pointer {
//	enum {value = false};
//};
//template <typename T> struct is_pointer<T*> {
//	enum { value = true };
//};
// 핵심 : template 부분 특수화라는 문법으로 조건을 만족하는 경우 value = true

template<typename T> void foo(const T& b)
{
	//	T : int, int*

	if (std::is_pointer<T>::value)
		std::cout << "포인터" << std::endl;
	else
		std::cout << "포인터 아님" << std::endl;
	
}

int main()
{
	int n = 10;

	foo(n);
	foo(&n);
}

#endif