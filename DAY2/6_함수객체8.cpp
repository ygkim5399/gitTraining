#include <vector>
#include <algorithm>
#include <functional> // std::less<>, std::greater<> 가 이미 있습니다.
#include "show.h"


inline bool cmp1(int a, int b) { return a < b; }

// std::sort() 사용법 정리

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 1. 비교 정책을 전달하지 않은 경우 : 오름 차순 정렬
	std::sort(v.begin(), v.end());	


	// 2. 일반 함수로 비교 정책을 전달하는 경우
	std::sort(v.begin(), v.end(), cmp1); // 비교 정책(cmp1) 인라인 치환안됨


	// 3. 함수객체로 비교 정책을 전달하는 경우
	std::less<int> f;
	std::sort(v.begin(), v.end(), f); // 비교 함수 정책(f)가 인라인 치환됨


	// 한번만 사용하면 "임시객체" 형태로 보내는 것이 좋습니다.
	std::sort(v.begin(), v.end(), std::less<int>() );
}