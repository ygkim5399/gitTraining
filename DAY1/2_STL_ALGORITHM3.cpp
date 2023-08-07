#include <iostream>

// Step 3. 검색 대상 타입의 일반화
// => 템플릿 사용
// => 문자열 뿐 아니라 모든 타입의 배열에서 검색 가능
// => 함수 이름 변경 : strchr => find 

template<typename T>
T* find(T* first, T* last, T c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 전체 검색하려면 "x+9" 가 아닌 "x+10(마지막 다음주소)" 을 전달 해야 합니다.
	double* p = find(x, x + 10, 5.0);

	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}