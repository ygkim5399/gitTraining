#ifndef DAY2

#include <iostream>
#include <algorithm> 

// 137page 아래부분

// sort 함수를 생각해 봅시다.(구현 알고리즘은 고려하지 마세요, 가장 간단한 구현)
// 마지막 인자로 "어떻게 비교 할지 정책 함수를 받아서 사용"

// 아래코드는 비교정책 교체는 가능하지만
// 비교를 위해 2중루프안에서의 함수호출이 있습니다.
// 직접 비교하는 코드에 비해서 많이 느립니다. 
// "비교정책을 변경할 수 있는데 성능저하는 없이" 만들 수 없을까요?
// -> 이 방법이 STL 이 사용하는 방법 (6_함수객체6.cpp) 

void Sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			//if (x[i] > x[j])				// 1. 직접 비교
											
			if (cmp(x[i], x[j]) == true)	// 2. 비교함수 호출
				std::swap(x[i], x[j]);
		}
	}
}

//-------------------

inline bool cmp1(int a, int b) { return a > b; }
inline bool cmp2(int a, int b) { return a < b; }

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Sort(x, 10, cmp1);
	Sort(x, 10, cmp2);
}


#endif