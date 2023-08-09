#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// 예전에 만들어 놓은 함수
// => 인자로 "배열의 주소" 와 "크기" 를 받고 있습니다.
void foo(int* arr, int sz) {}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10);

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// foo 에 v를 보내 보세요.
//	foo(v, v.size()); // error
//	foo(&v, v.size()); // error. v의 주소이지, 10개 버퍼의 주소는 아님.

	foo(&v[0], v.size()); // ok.. C++11 이전에 사용하던 코드
	foo(v.data(), v.size()); // ok.. C++11 이전에 사용하던 코드
}


