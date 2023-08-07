#include <iostream>

// Step 4. 구간의 타입과 검색 대상 요소의 타입의 암시적 변환 허용
// 템플릿을 아래 처럼 만들면 2개의 문제가 있습니다.
// template<typename T> T* find(T* first, T* last, T c)

// 1. 구간의 타입과 검색할 요소의 타입이 연관됩니다.
// => double 배열 에서 int 값 검색이 안됩니다.

// 2. 구간의 타입을 T* 라고 하면 반드시 포인터만 전달해야 합니다.
// => 스마트 포인터 같이 포인터 유사 객체를 전달할수 없습니다.

template<typename T1, typename T2>
T1 find( T1 first, T1 last, T2 value )
{
	while (first != last && *first != value )
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };


	double* p = find(x, x + 10, 5);





	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}