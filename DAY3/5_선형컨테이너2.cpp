
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// 1. 생성
	std::vector<int> v1;		// 요소가 없다
	std::vector<int> v2(10);	// 10개 요소를 0으로 초기화
	std::vector<int> v3(10, 3);	// 10개 요소를 3으로 초기화
	std::vector<int> v5{10, 3}; // 2개를 10, 3 으로 초기화
	std::vector<int> v6 = { 1,2,3 }; // 3개를 1, 2, 3

	std::vector<int> v4(v3); // v3 의 요소를 복사!!


	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 2. 삽입, 
	

	// 3. 접근
	
	// 4. 요소 변경

}