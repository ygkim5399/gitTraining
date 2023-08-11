#ifndef DAY4

#include <iostream>
#include <memory>


int main()
{
	std::shared_ptr<int>  sp1(new int); // ok, sp1 소멸자가 delete 수행!
	
	std::shared_ptr<int> sp2(new int[10]); // 버그
							//-> new[] 를 사용한 경우 delete 도 [] 버전 사용해야 합니다.
							// -> sp2의 소멸자는 delete[] 가 아닌 delete 사용

	std::shared_ptr<int> sp2(new int[10], [](int* p) {delete[] p; }); // ok

	// C++17 부터는 아래처럼 할 수 있습니다.
	std::shared_ptr<int[]> sp3(new int[10]); // ok. 소멸자가 delete[] 수행

	// 그런데 여기서 생각해볼 문제
	// int 타입 10개를 동적할당 할거라면....
	// 1. 왜?? 스마트포인터를 사용하는가!!!
	// 2. vector 가 있는데, std::vector<int> v(10)

	// 객체 여러개를 힙에 만들어 관리하려면 : vector 권장
	// 객체 한개를 힙에 만들어 관리하려면	: 스마트포인터 권장
}

// 파이썬 코드.
// 아래 코드의 메모리 구조
//n1 = 10;	// 힙에 10이라는 객체 생성 (n1 은 포인터)
//n2 = n1;	// n1 과 동일한 주소를 가리킴 (reference counting++)

//n1 = 3.4; // 3.4의 객체 생성, n1 은 3.4의 주소를 가리킴 (reference counting--)

//-----
//type 정보
//값
//reference counting
//-----





#endif