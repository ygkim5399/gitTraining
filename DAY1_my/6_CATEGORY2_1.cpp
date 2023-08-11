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
	// 입력, 전진, 양방향, 랜덤은 write 기능은 안되는걸까요?
	// -> 안되는 것이 아니라 필수조건이 아니라는 의미입니다.
	std::list<int> s1 = { 1,2,3 };
	const std::list<int> s2 = { 1,2,3 };

	auto p1 = s1.begin();	// p1은 양방향 반복자, 쓰기도 가능
	auto p2 = s2.begin();	// p1은 양방향 반복자, 읽기도 가능

	// 그럼 std::reverse() 의 조건은 양방향 + 출력인가요?
	// -> 유사합니다. 정확히는 양방향 + swappable 입니다
	// cppreference.com 에서 std::reverse 검색
	//--------------------------
	//왜 list 반복자는 +, - 가 안되나요?
	//	-> 그냥 제공하면 안되나요?
	//	-> 성능나쁜 코드를 만들게 될 수 있습니다. 아래코드 참조

	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	auto p = s.begin();
	for (int i = 0; i < s.size(); i++) {
		int n = *(p + i); // 이 한줄이 될 경우 성능을 생각해보기
						// 항상  처음부터 시작하므로 성능이 좋지않다.
	}
}


#endif