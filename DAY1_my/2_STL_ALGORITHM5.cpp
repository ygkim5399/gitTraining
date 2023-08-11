#ifndef DEBUG

#include <iostream>

// Step4. 구간의 타입과 검색대상 요소의 타입의 암시적 변환 허용
// template <typename T> T* find(T* first, T* last, T c)
// template 을 위처럼 만들면 2개의 문제가 있습니다. 
// 1. 구간의 타입과 검색할 요소의 타입이 연관됩니다. 
// -> double 배열에서 int 값 검색이 안됩니다. 
// 2. 구간의 타입을 T* 라고 하면 반드시 포인터만 전달해야합니다.
// -> 스마트 포인터같이 포인터 유사 객체를 전달할 수 없습니다.

/*
Step 5. 검색 실패 시 반환값 변경
nullptr 이 아닌 last 반환

1. last 는 검색에 포함되지 않으므로 검색에 성공했다면 last 가 나올 수 없다.
2. 검색 실패 시 last 를 반환하면 
-> find 구현이 빨라진다.
-> 실패 시 반환 값이 다음구간의 시작이 된다. 

*/
template <typename T1, typename T2>
T1 find(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
		++first;

	return first;// == last ? nullptr : first;
}

int main()
{
	//char s[] = "abcdefgh";

	// C 언어 표준에 strchr 함수가 있습니다. 
	// 일반적으로 프로그래밍에서 끝은 제외한다. 
	//char* p = find(s, s + 4, 'c');


	// 배열의 마지막 주소를 참조는 불가능하지만 비교를 위해 사용은 가능하다.
	// ex a[10] 에서 a[10] 을 참조는 불가능하지만 비교로 사용은 가능

	double a[] = { 1,2,3,4,5,6,7,8,9 };
	double* t = find(a, a + 5, 7);
	if (t == a+5)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *t << std::endl;
}

#endif
