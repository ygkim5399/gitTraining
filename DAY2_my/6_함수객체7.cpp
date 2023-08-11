#ifndef DAY2

// 3_함수객체7 - 136 page소스
#include <iostream>
#include <algorithm>

inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }
struct Less   { inline bool operator()(int a, int b) { return a < b; }};
struct Greater{	inline bool operator()(int a, int b) { return a > b; }};

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// C++ 표준 sort()는 3개의 인자가 모두 템플릿 입니다.
	// -> 사용자가 사용하는 코드를 보고 컴파일러가 "함수(코드)를 생성한다"는 의미


	// 1. 비교 정책으로 일반함수 사용시
	// 장점 : 비교정책을 여러번 교체해도, sort() 함수 자체는 한개만 생성된다. 
	//			-> cmp1, cmp2가 다른 함수지만, 같은 타입이므로
	// 단점 : 비교정책함수가 inline 치환될 수 없다.
	//			-> 느리다.  
	//			-> 데이터 양이 많은 경우는... 주의!

	std::sort(x, x + 10, cmp1); // sort(int*, int*, bool(*)(int, int)) 모양의 함수생성
	std::sort(x, x + 10, cmp2); // sort(int*, int*, bool(*)(int, int)) 모양의 함수생성

	// 2. 비교정책으로 함수객체 사용시
	// 장점 : 비교정책함수가 inline 치환될 수 있다.
	//			-> 빠르다.
	//			-> 데이터 양이 많다면 확실히 빨라집니다. 
	// 단점 : 비교정책을 교체한 횟수 만큼의 sort() 함수 생성
	//			-> 코드 메모리 증가!

	Less    f1;
	Greater f2;
	std::sort(x, x + 10, f1); // sort(int*, int*, Less		) 모양의 함수생성
	std::sort(x, x + 10, f2); // sort(int*, int*, Greater	) 모양의 함수생성
}


// 데이터양이 적고, 비교정책을 여러번 교체한다			: 일반 함수
// 데이터양이 많고, 비교정책을 여러번 교체하지 않는다	: 함수 객체

// sort() 같은 함수의 구현부 자체가 작은 경우, 여러개 생성되어도 큰 문제는 없다. 








#endif