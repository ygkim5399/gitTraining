#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

int main()
{
	// 입력, 전진, 양방향, 랜덤은 write 기능은 안되는 것인가요 ?
	// => 안되는 것이 아니라, 필수 조건이 아니라는 의미 입니다
	// => cppreference.com 에서 1번째 화면 "iterator library" 선택
	std::list<int> s1 = { 1,2,3 };
	const std::list<int> s2 = { 1,2,3 };

	auto p1 = s1.begin();	// p1 은 양방향 반복자, 쓰기도 가능
	auto p2 = s2.begin();	// p1 은 양방향 반복자, 읽기도 가능
	
	// 그럼, std::reverse() 의 조건은 "양방향 + 출력" 인가요 ?
	// => 유사합니다.
	// => 정확히는 "양방향 + swappable" 입니다.
	// => cppreference.com 에서 std::reverse 검색

	//----------------------------
	// 왜, list 반복자는 +, - 가 안되나요 ?
	// => 그냥 제공 하면 안되나요 ?
	// => 성능 나쁜 코드를 만들게 될수 있습니다.. 아래 코드 참고

	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	
	auto p = s.begin();
	
	for (int i = 0; i < s.size(); i++)
	{
		int n = *(p + i); // 이 한줄이 된다면.. 성능을 생각해 보세요		
	}
}