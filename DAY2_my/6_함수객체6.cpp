
#ifndef DAY2
// 3_함수객체6
// 1. 일반 함수는 자신만의 타입이 없습니다.
//    signature(리턴타입과 파라미터) 가 
//    동일한 모든 함수는 같은 타입입니다.
// -> inline 이라도 치환될 수 없다. 

// 2. 함수 객체는 자신만의 타입이 있다.
// signature (operator() 함수의 반환 타입과 인자)가 동일해도 
// 모든 함수객체는 다른 타입이다. 

#include <algorithm>


struct Less
{
	inline bool operator()(int a, int b) { return a < b; }
};
struct Greater
{
	inline bool operator()(int a, int b) { return a > b; }
};

// 비교 정책을 교체할 수 있는데, 비교정책의 인라인 치환이 가능한 sort
// template + 함수객체를 사용하는 기술
// -> STL 의 핵심 설계 철학
// 단점 : 코드메모리 증가 (sort 가 2개 생긴다) 

template <typename T>
void Sort(int* x, int sz, T cmp)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			if (cmp(x[i], x[j]) == true) // inline 지원됨
				std::swap(x[i], x[j]);
		}
	}
}

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	Less    f1; f1(1, 2); Sort(x, 10, f1); // ok
	Greater f2; f2(1, 2); Sort(x, 10, f2); 
}





#endif