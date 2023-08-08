#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

	// 컨테이너의 모든 요소를 화면 출력할 일이 많이 있습니다.
	// 아래 함수를 만들어 봅시다.
	show(v);
	show(x);
}