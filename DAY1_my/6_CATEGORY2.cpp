#ifndef DEBUG

// 입력 반복자
// 출력 반복자
// 전진형 반복자
// 양방향 반복자
// 임의접근 반복자
// continuous 반복자
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

int main()
{
	std::forward_list<int> s1 = { 1,2,3 }; // 전진형
	std::list<int> s2 = { 1,2,3 };			// 양방향
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 }; // 임의접근

	// find 알고리즘의 1,2번째 인자는 반복자입니다.
	// -> 최소 요구조건을 5가지 카테고리에서 찾아보세요
	// -> 주어진구간을 한번만 ++로 순회할 수 있으면 됩니다.
	// -> 입력반복자 이상이면 됩니다. 
	auto p = std::find(std::begin(v), std::end(v), 5);


	std::reverse(v.begin(), v.end());
	// 최소 요구 조건은? 
	// -- 필요 -> 양방향 접근자
	// 현재 s1 : 싱글리스트, s2 : 더블리스트
	std::reverse(s1.begin(), s1.end()); // error
										// std::reverse() 는 양방향반복자를 요구하는데
										// 싱글리스트 반복자는 전진형반복자이므로 요구조건을 만족못함
	
	std::reverse(s2.begin(), s2.end()); // okay

	// 퀵소트로 구현되어있습니다.
	// -> 인자의 요구조건은 뭘까요??
	// -> 퀵 소트하려면 -- 연산이 되어야합니다.
	// 임의 접근반복자!
	std::sort(v.begin(), v.end());
	std::sort(s2.begin(), s2.end()); // s2는 더블링크드 리스트
									// 양방향 반복자
									// - 연산 지원안됨 -> error
	// 더블리스트는 퀵소트말고 다른 알고리즘으로 하면됩니다.
	// -> 그래서 list 는 멤버함수 버전의 sort 가 있습니다. 
	//s2.sort(); // 퀵이아닌 다른 알고리즘

	// 질문 : vector 에도 멤버함수 sort 가 있을까요?
	//v.sort();  // error, 없다.
				// vector 반복자는 "임의접근" 반복자이므로
				// 모든 알고리즘 사용가능
				// sort 가 필요하면 std::sort() 를 사용하면 되므로 
				// 멤버함수 sort()는 필요없다. 
}


#endif