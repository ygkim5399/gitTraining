// 7_array2
#include <iostream>
#include <array>

// 아래 코드를 생각해 보세요
struct array
{
	int buff[5];
};

int main()
{
	// 구조체 안에 배열이 있으면 아래 처럼 초기화 가능합니다.
	array arr = { 1,2,3,4,5 };
}
