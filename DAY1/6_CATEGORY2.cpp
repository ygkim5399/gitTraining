#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

// 53 page 표 참고


// 입력 반복자 : =*p, ++
// 
// 출력 반복자 : *p=, ++
// 
// => 위   2개는 multiple pass 보장 안함
// => 아래 3개는 multiple pass 보장
// 
// 전진형 반복자 : =*p, ++			=> 싱글리스트 반복자
// 
// 양방형 반복자 : =*p, ++, --		=> 더블리스트 반복자
// 
// 임의접근 반복자 : =*p, ++, --, +, -, []   => 연속된 메모리와 유사한 컨테이너
//												vector, deque
// continuos 반복자 : C++17 추가된 개념, 연속된 메모리 보장.



int main()
{
	std::forward_list<int> s1 = { 1,2,3 };			// 전진형
	std::list<int> s2 = { 1,2,3 };					// 양방향
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };	// 임의접근 반복자

	// find 알고리즘의 1, 2번째 인자는 반복자 입니다.
	// => 최소 요구조건을 5가지 카테고리에서 찾아 보세요.
	// => 주어진 구간을 한번만 ++로 순회 할수 있으면 됩니다.
	// => "입력반복자" 이상이면 됩니다.
	auto p = std::find(std::begin(v), std::end(v), 5);


	std::reverse(v.begin(), v.end());
			// => 최소 요구 조건은 "양방향 반복자"

	// 현재 s1 : 싱글리스트, s2 : 더블리스트
	std::reverse(s1.begin(), s1.end()); 
			// error.
			// std::reverse() 는 양방향 반복자를 요구 하는데
			// 싱글리스트의 반복자는 전전형 반복자이므로 요구조건 만족 못합니다.

	std::reverse(s2.begin(), s2.end());
			// ok.

	// 퀵 소트로 구현되어 있습니다.
	// => 인자의 요구조건은 뭘까요 ?
	// => 퀵 소트 하려면 - 연산이 되어야 합니다.
	// => 임의 접근 반복자!!
	std::sort( v.begin(), v.end() ); // ok. vector 반복자는 임의 접근 반복자
	
	std::sort(s2.begin(), s2.end()); // s2는 더블링크드 리스트
									// 양방향 반복자
									// "-" 연산 지원 안됨.	
									// error. 
									// 
	// 더블리스트는 퀵소트 말고 다른 알고리즘으로 하면 됩니다.
	// => 그래서 list 는 멤버 함수 버전의 sort 가 있습니다.
	s2.sort(); // 퀵이 아닌 다른 알고리즘. 

	// 질문 : vector 에도 멤버 함수 sort()가 있을까요 ?
	v.sort();	// error. 없다.
				// vector 반복자는 "임의 접근" 반복자 이므로
				// 모든 알고리즘 사용가능.
				// 소트가 필요 하면 "std::sort()" 를 사용하면 되므로
				// 멤버 함수 sort()는 필요 없다.

}