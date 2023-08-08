#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 핵심 : "알고리즘과 동일한 이름을 가진 멤버 함수가 있다면"
//       멤버 함수를 사용해라

// remove() 하고 싶다면
// 1. 멤버 함수 remove 를 찾아라.. 있으면 사용..
// 2. 없으면 std::remove() 사용.

// 왜? 일반함수와 동일한 멤버 함수를 또 제공하나요 ?
// 1. 일반함수로 보낼수 없을때
//     => std::sort(list반복자) 를 보낼수 없습니다.
//     => list.sort()는 가능합니다.

// 2. 일반 함수 보다 더 최적화된 구현이 가능할때
//     => std::remove(list반복자) 는 보낼수 있습니다.
//     => list.remove()  하지만, 이 코드가 더 좋습니다.


int main()
{
//	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int>   v = { 1,2,3,1,2,3,1,2,3,1 };

	// 아래 코드는 vector 가 아닌 list 에도 아무 문제 없이 
	// 잘 동작합니다.
	// => 그런데, 성능을 생각해 보세요 ( list 는 떨어진 메모리 사용)
	/*
	auto p = std::remove(v.begin(), v.end(), 3);
	show(v);
	v.erase(p, v.end());
	show(v);
	*/

	// list 의 경우는 일반화된 알고리즘 std::remove() 보다
	// 멤버 함수 remove() 를 사용하는 것이 좋습니다.
	// list 만의 효율적인 알고리즘으로 구현.
	v.remove(3);

	show(v);
}

