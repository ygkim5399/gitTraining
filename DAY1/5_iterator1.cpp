// iterator1.cpp
#include <iostream>
#include <list>
using namespace std;

int main()
{
	int x[5] = { 1,2,3,4,5 };

	int* p = x;
	*p; 
	++p;


	std::list<int> s = { 1,2,3,4,5 };

	// STL 의 모든 컨테이너는 "반복자(iterator)" 를 사용하면
	// 모두 동일하게(포인터 처럼) 모든 요소에 접근할수 있습니다.

	std::list<int>::iterator p2 = s.begin();
	*p2;  // p2.operator*()
	++p2; // p2.operator++()
}










