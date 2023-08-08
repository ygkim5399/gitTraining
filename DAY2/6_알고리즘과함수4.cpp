#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// 주어진 구간에서 "3의 배수"를 찾고 싶다.
	auto p1 = std::find_if(v.begin(), v.end(), foo );
	auto p2 = std::find_if(v.begin(), v.end(), [](int n) { return n % 3 == 0; });


}










