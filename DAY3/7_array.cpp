#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	// 배열과 vector 는 유사합니다.
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 }; 

	// 1. 배열, vector 모두 []로 요소 접근
	// => 모두 연속된 메모리에 보관
	x[0] = 10;
	v[0] = 10;

	// 2. vector 는 size 변경이 가능 하지만 배열은 안됩니다.
	v.resize(20); // ok

	// 3. vector 는 다양한 멤버 함수도 있습니다.
	int n = v.size();


	// 배열   : 지역변수 인 경우 모든 데이타가 stack 에 있습니다.
	// std::vector : 모든 데이타가 "힙" 메모리에 있습니다.
	// std::array  : 모든 데이타가 "stack" 메모리에 있습니다.
}
