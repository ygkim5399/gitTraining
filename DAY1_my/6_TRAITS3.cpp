#ifndef DEBUG

#include <iostream>
#include <vector>
#include <list>


// STL 컨테이너, 반복자 외 "요소의 타입"

template <typename C>
void f1(C& c) {
	// c 는 컨테이너입니다.
	// C::value_type : C가 저장하는 요소의 타입 (현재 main 코드에서는 int)
	// -> 단 C가 배열일 경우는 에러!
	 C::valuye_type n = c.front();
	 // 단, 위 코드는 auto 가 좋습니다. 
	 auto n = c.front();
}

template <typename T>
void f2(T first) {
	// T 는 반복자(iterator) 입니다. 
	typename T::value_type n1; // 반복자가 가리키는 요소의 타입
								// T 가 raw pointer 라면 에러!
	typename std::iterator_traits<T>::value_type n2; // T라 raw pointer 라도 ok

	// 위 코드가 자주 사용되는데 많이 복잡합니다.
	// 그래서 C++20부터 훨씬 간단하게 사용가능해 졋습니다.
	//std::iter_value_t<T> n3; // C++20 옵션 필요
}

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = { 1,2,3,4,5,6,7,8,9, 10 };
	f1(v);
	f2(v.begin());
}


#endif