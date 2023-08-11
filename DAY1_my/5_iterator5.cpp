#ifndef DEBUG

#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	// 핵심 1. past the end iterator
	auto p1 = std::begin(s1); // std::begin(s1); 1번째 요소를 가리키는 반복자
	auto p2 = std::end(s1);		// std::end(s1); 마지막 다음요소

	//*p2 = 10; // runtime error .. 마지막이 아닌 마지막 다음을 가리키므로
	// end() 로 얻은 반복자는 == 와 != 연산으로 끝에 도달했는지 확인용으로만 사용해야한다.

	// [p1, p2)

	while (p1 != p2)
	{
		++p1;
	}

	std::list<int> s3;
	// 컨테이너가 비어있는지 확인하는 방법
	// 방법 1
	if (s3.empty()) {}
	// 방법 2
	if (std::begin(s3) == std::end(s3)) {}	
}

#endif