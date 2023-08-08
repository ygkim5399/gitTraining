#include <iostream>

// 0 ~ 9 사이의 "중복 되지 않은 난수" 를 반환하는 함수
// => 어떻게 만들어야 할까요 ?
int urand()
{
	return rand() % 10;
}

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





