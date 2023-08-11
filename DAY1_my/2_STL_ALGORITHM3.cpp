#ifndef DEBUG

#include <iostream>

// Step3. 검색 대상 타입의 일반화
// -> 템플릿 사용
// -> 문자열 뿐 아니라 모든 타입의 배열에서 검색 가능
// -> 함수이름 변경 : strchr -> find

// Step 1. C 표준 함수
template <typename T>
T* find(T* first, T* last, T c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	//char s[] = "abcdefgh";

	// C 언어 표준에 strchr 함수가 있습니다. 
	// 일반적으로 프로그래밍에서 끝은 제외한다. 
	//char* p = find(s, s + 4, 'c');


	// 배열의 마지막 주소를 참조는 불가능하지만 비교를 위해 사용은 가능하다.
	// ex a[10] 에서 a[10] 을 참조는 불가능하지만 비교로 사용은 가능

	double a[] = { 1,2,3,4,5,6,7,8,9 };
	double* t = find(a, a + 10, 5.0);
	if (t == 0)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *t << std::endl;
}

#endif
