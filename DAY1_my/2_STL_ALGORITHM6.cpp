#ifndef DEBUG

#include <iostream>

/* find 총 정리

임의 타입의 배열에서
[first, last) 구간에서 선형검색 수행
last 는 검색 대상이 아님

검색구간	: [first, last)
구간의 이동 : 전위형 ++ 연산자
구간의 타입 : 반드시 raw pointer 일 필요는 없다. 
			  ++, *, !=, == 연산이 가능한 모든 객체 (스마트포인터포함)
			  
실패의 반환 : last
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
/*
질문 :last 에 잘못된 주소 (배열길이 초과)를 보내면 어떻게 되나요?
-> 사용자 잘못입니다.
-> 비정상 종료합니다.
-> find 는 사용자가 유효한 구간을 전달한다는 가정하에 동작합니다.
-> find 가 내부적으로 유효성을 조사하면 그 자체가 ""성능 저하"" 입니다.
double* p = find(x, x+12, 7);
*/
	// 그래서 x+10 보다는 아래 코드를 권장한다. 
	double a[] = { 1,2,3,4,5,6,7,8,9 };
	double* p = find(std::begin(a), std::end(a), 7);
	//double* t = find(a, a + 5, 7);
	if (p == a + 5)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}

#endif
