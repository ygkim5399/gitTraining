#ifndef DAY2

#include <iostream>

//// 0 ~ 9 사이의 난수를 반환하는 함수
//int urand()
//{
//	return rand() % 10;
//}

// 0 ~ 9 사이의 "중복되지 않는 난수"를 반환하는 함수
// -> 어떻게 만들어야할까요?
// 일반 함수는 "동작"은 있지만 "상태"가 없습니다.
// 함수 실행 중 생성된 데이터를 저장할 공간이 없습니다.
//-> 그래서 전역변수 등을 사용해야합니다.

int urand()
{
	return rand() % 10;
}

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





#endif