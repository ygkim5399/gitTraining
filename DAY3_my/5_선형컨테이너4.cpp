#ifndef DAY3

#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// 예전에 만들어 놓은 함수
// -> 인자로 "배열의 주소"와 "크기"를 받고 있습니다.

void foo(int* arr, int sz) {}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10);

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 잘못된 index 를 사용했습니다.
	// 1. 예외 발생할 것이다. throw..
	// 2. 비정상 종료될 것이다. 
	//v[10] = 0; // 2. 비정상 종료. 잘못된 index 확인 않함
	//v.at(10) = 0; // 1. 예외 발생

	try {
		v[10] = 0;  
		v.at(10) = 0;
	}
	catch (std::out_of_range & e) {
		std::cout << "exfception : " << e.what() << std::endl;
	}
	std::cout << "main continue " << std::endl;




	for (int i = 0; i < v.size(); i++) {
		// 다음중 좋은 코드는?
		// -> 핵심은 i가 잘못되지 않았다는 것
		v[i] = 0; // 1. 좋은 코드!! exception 던지지 않음. 성능저하
		v.at(i) = 0; // 2. exception 던짐 
	}

	// foo 에 v를 보내 보세요.
	//foo(v, v.size()); // error
	//foo(&v, v.size()); // error. v의 주소이지, 10개 버퍼의 주소는 아님

	foo(&v[0], v.size()); // ok.. c++11 이전에 사용하던 코드
	foo(v.data(), v.size()); // ok
	
}



#endif