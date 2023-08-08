#include <iostream>
#include <algorithm> 

// 137page 아래부분


// sort 함수를 생각해 봅시다.(구현 알고리즘은 고려하지 마세요, 가장 간단한 구현)
// 마지막 인자로 "어떻게 비교 할지 정책 함수를 받아서 사용"

void Sort(int* x, int sz, bool(*cmp)(int , int ) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
//			if (x[i] > x[j])  

			if ( cmp(x[i], x[j]) == true )
				std::swap(x[i], x[j]);
		}
	}
}
//-------------------------
bool cmp1(int a, int b) { return a > b; }
bool cmp2(int a, int b) { return a < b; }


int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Sort(x, 10, cmp1);
}

