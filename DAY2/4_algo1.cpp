#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


// 알고리즘 의 일반 적인 의미
// => "문제를 해결하는 방법" 이라는 의미


// STL 에서 "알고리즘" 이라는 용어의 의미
// => std::find 같이 "멤버가 아닌 일반 함수(템플릿)"을 부르는 용어
// => <algorithm> 헤더 필요 





// 알고리즘 기본
int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int>   s = { 1,2,3,1,2,3,1,2,3,1 };
	
	// v 와 s 에서 3을 찾고 싶다.

	// 1. 멤버함수 find 를 제공한다면
	// => 사용하기 쉽다, 코드가 단순해 보인다
	// => 모든 컨테이너에 동일한 구현을 가진 find 가 필요 하다.
	// => find 알고리즘이 update되면 모든 컨테이너를 변경해야 한다.
	// => java 등의 다른 언어는 이 방식이지만, C++ STL 은 이 방식 사용안함
//	auto ret1 = v.find(3);
//	auto ret2 = s.find(3);

	
	// 2. find 를 멤버가 아닌 일반 함수 템플릿으로 제공한다면
	// => 모든 컨테이너에서 사용가능하다.
	// => find 의 구현이 update 되어도, 한개만 수정하면 된다.
	// => 단, 사용자 입장에서는 사용하기에 어려워 보인다

	auto p1 = std::find( v.begin(), v.end(), 3);
	auto p2 = std::find( s.begin(), s.end(), 3);

	// 주의 : 검색 실패는 항상 "검색 구간의 끝"  와 비교 해야 합니다.
	// 검색 성공시 : 요소를 가리키는 반복자 반환
	// 검색 실패시 : 구간의 끝(find 의 2번째 인자)
	if (p2 == s.end())
	{
		// 검색 실패
	}
	else
	{
		// 검색 성공
	}

	return 0;
}



















//
