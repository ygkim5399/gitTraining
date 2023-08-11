#ifndef DAY2
#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

#include <vector>

// 핵심 : 알고리즘과 동일한 이름을 가진 멤버함수가 있다면 
//			멤버함수를 사용해라


// remove() 하고 싶다면
// 1. 멤버함수 remove 를 찾아라. 있으면 사용
// 2. 없으면 std::remove() 를 사용
// 3. 혹시 2번이 에러라면? 해당 컨테이너에 그 기능을 할 수 있는가를 생각

// 왜? 일반함수와 동일한 멤버함수를 또 제공하나요?
// 1. 일반 함수로 보낼 수 없을 때,
// -> std::sort(list 반복자) 를 보낼 수 없습니다.
// -> list.sort() 는 가능합니다. 

// 2. 일반함수보다 더 최적화된 구현이 가능할  때, 
// -> std::remove(list 반복자) 는 보낼 수 있습니다.
// -> list.remove() 하지만 이 코드가 더 좋습니다. 

int main()
{
	//std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// 아래 코드는 vector 가 아닌 list 에도 아무 문제 없이 잘 동작 합니다.
	// 그런데 성능을 생각해 보세요. (list 는 떨어진 메모리 사용)
	/*
	auto p = std::remove(v.begin(), v.end(), 3);
	show(v);
	v.erase(p, v.end());
	show(v);
	*/

	// list 의 경우는 일반화된 알고리즘 std::remove() 보다
	// 멤버함수 remove() 를 사용하는 것이 좋습니다. 
	// list 만의 효율적인 알고리즘으로 구현
	v.remove(3);

	show(v);
	return 0;
}



















//
#endif