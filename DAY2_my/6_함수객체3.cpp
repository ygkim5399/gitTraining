#ifndef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;


bool foo(int a) {
	return a % 3 == 0;
}

class IsDivide {
	int value;
public:
	IsDivide(int n) : value(n) {}

	bool operator()(int n) {
		return n % value == 0;
	}
};

int main()
{
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// 주어진 구간에서 k배수를 찾고 싶다
	
	int k = 3;
	IsDivide f(k); // f는 내부적으로 k 값을 보관하게 됩니다.

	bool b = f(10); // 10 % k 입니다. 
					// 즉, f는 단항함수(객체) 이면서 내부적으로는 
					// main 함수의 지역변수 k 값을 캡쳐해서 보관하고 있습니다. 

	auto p21 = std::find_if(v.begin(), v.end(), f);


	return 0;
}

// 일반함수는 "클로져" 가 될 수 없지만
// 함수객체는 "클로져"가 될 수 있습니다. 

















//
#endif