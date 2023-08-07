#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	// 핵심 1. past the end iterator
	auto p1 = s1.begin(); // std::begin(s1);  1번째 요소를 가리키는 반복자
	auto p2 = s1.end();   // std::end(s1);    마지막 다음 요소 ""

//	*p2 = 10; // runtime error.. 마지막이 아닌 마지막 다음을 가리키므로!

	// .end() 로 얻은 반복자는 == 와 != 연산으로 끝에 도달했는지
	// 확인하는 용도로만 사용해야 합니다.
	// [p1, p2)

	while (p1 != p2)
	{
		++p1;
	}

	// 컨테이너가 비어 있는지 확인하는 2가지 방법
	std::list<int> s3;	
	if (s3.empty()) {}	// 방법1

	if (std::begin(s3) == std::end(s3)) {}	// 방법 2. 
}