#include <iostream>
#include <list>
// 반복자의 형태
// 1. 포인터를 흉내내어서 클래스로 만든 것들 (T::value_type 가능)
// 2. 진짜 포인터 (T::value_type 안됨)

// 위 2가지 형태의 차이점 때문에 아래 같은 sum 만들기가 어렵습니다

template<typename T> struct iterator_traits
{
	using value_type = T::value_type;
};


template<typename T>
typename T::value_type sum(T first, T last)
{
	// T : 반복자 인데, 현재는 int* 입니다.

//	typename T::value_type s = 0;
	typename iterator_traits<T>::value_type s = 0;



	while (first != last)
	{
		s += *first;
		++first;
	}
	return s;
}

int main()
{
//	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 핵심 : raw pointer 도 반복자입니다.
	int n = sum(std::begin(s), std::end(s));

	std::cout << n << std::endl; // 55
}