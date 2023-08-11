#ifdef DAY3

#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	// 배열과 vector 는 유사합니다.
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };


	// 1. 배열, vector 모두 [] 로 요소 접근
	// -> 모두 연속된 메모리에 보관
	x[0] = 10;
	v[0] = 10;

	// 2. vector 는 size 조절이 가능하지만 배열은 안됩니다. 
	v.resize(20); // ok

	// 3. vector 는 다양한 멤버함수도 있습니다. 
	int n = v.size();
	
	// 배열			: 지역변수 인 경우 모든 데이터가 stack에 있습니다. 
	// vector		: 모든 데이터가 "힙" 메모리에 있습니다. 
	//				-> 할당 및 해제 속도 떄문에 배열보다는 느리다
	// std::array	: 모든 데이터가 "stack" 메모리에 있습니다.

	// stack 은 순처적으로 보관하기 때문에 할당 및 해제가 빠르다
	// heap 은 메모리 할당 및 해제가 느리다.  
}


#endif