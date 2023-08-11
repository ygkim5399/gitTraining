#ifndef DEBUG

#include <iostream>
#include <list>
#include <filesystem>

// 반복자의 정리
// -> "반복자처럼 동작하는 모든것은 반복자이다.
// -> ++ 로 이동가능하고, *로 요소접근 가능한 것 

// 반복자의 형태
// 1. raw pointer 도 반복자로 분류합니다 (int*p = x)
// 2. 각 컨테이너에서 꺼내는 반복자 (auto p = v.begin());
// 3. 컨테이너와 관련없이 독립적으로 만들어져서 사용하는 반복자들도 있습니다.
// 

int main()
{
	std::filesystem::directory_iterator p("C:\\windows");

	std::cout << *p << std::endl;
	++p;
	std::cout << *p << std::endl;
}










#endif