#include <iostream>

// Step 5. 검색 실패시 반환 값 변경
// => nullptr 이 아닌 "last" 반환

// 1. last 는 검색에 포함되지 않으므로 
//    검색에 성공했다면 last 가 나올수 없다.

// 2. 검색 실패시 last 반환 하면
// => find 구현이 빨라진다.
// => 실패시 반환 값이 다음 구간의 시작이 된다.

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
		++first;
	return first;// == last ? nullptr : first;
}
int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 5, 7);

	if (p == x + 5 )
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}