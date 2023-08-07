#include <forward_list> // 싱글 링크드 리스트
#include <list>			// 더블 링크드 리스트

// 교재 53 page.. 반복자 카테고리.




int main()
{
	std::forward_list<int> s1 = { 1,2,3 };

	std::list<int> s2 = { 1,2,3 };

	auto p1 = s1.begin(); // 싱글리스트 반복자
	auto p2 = s2.begin(); // 더블리스트 반복자
	
	// 아래 4줄에서 에러를 찾아 보세요
	++p1;
	--p1; // error. 싱글 링크드 리스트는 자료구조 특성상 앞쪽(prev)로는 이동
		  // 할수 없습니다.
	++p2;
	--p2;

}