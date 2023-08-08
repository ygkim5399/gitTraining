#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

struct IsDivide
{
	int value;

	IsDivide(int n) : value(n) {}

	bool operator()(int n) { return n % value == 0; }
};

int main()
{
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// 주어진 구간에서 "k의 배수" 를 찾고 싶다.
	int k = 3;

	IsDivide f(k); // f는 내부적으로 k값을 보관하게 됩니다.

	auto p1 = std::find_if(v.begin(), v.end(), f );
}


