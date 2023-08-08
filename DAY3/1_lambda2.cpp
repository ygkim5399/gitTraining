#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include "chronometry.h""

constexpr int CNT = 10000000; 

std::vector<int> v1;
std::vector<int> v2;

void init()
{
	int n = 0;
	v1.reserve(CNT);
	v2.reserve(CNT);
	for (int i = 0; i < CNT; i++)
	{
		n = rand();
		v1.push_back(n);
		v2.push_back(n);
	}
}

inline bool cmp(int a, int b) { return a < b; }

void f1()
{
	std::sort(v1.begin(), v1.end(), cmp);
}

void f2()
{
	std::sort(v2.begin(), v2 .end(), std::less<int>());
}


int main()
{
	init();
	
	chronometry(f1); // f1() 실행후, 수행시간 출력
	chronometry(f2); // f2() 실행후, 수행시간 출력
}