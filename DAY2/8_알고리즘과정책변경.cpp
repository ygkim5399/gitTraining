// 3_알고리즘과정책변경
#include <iostream>
#include <vector>
#include <functional>
#include "show.h"

#include <algorithm>  // 정렬, 선형검색, 이진 검색 등의 알고리즘
#include <numeric>    // 수치 관련 연산(합, 부분합, 내적등)

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

//	std::sort(v1.begin(), v1.end()); // <algorithm> 헤더

	// 수치 알고리즘
	// int n = std::accumulate(v1.begin(), v1.end(), 0);


	// 핵심 : STL 의 다양한 알고리즘은 정책 변경이 가능하도록 설계되어 있습니다.
//	int n = std::accumulate(v1.begin(), v1.end(), 0); // 내부적으로 + 연산

//	int n = std::accumulate(v1.begin(), v1.end(), 1, 
//								[](int a, int b) { return a * b; });

	int n = std::accumulate(v1.begin(), v1.end(), 1,
								std::multiplies<int>() );

	std::cout << n << std::endl; 

}
