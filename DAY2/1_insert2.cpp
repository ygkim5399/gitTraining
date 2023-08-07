#include <list>
#include <vector>
#include <algorithm>
#include <iterator>  // 삽입반복자를 위한 헤더

int main()
{
	std::list<int> s1 = { 0, 0, 0, 0, 0 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	// v 의 모든 요소를 list 에 추가하고 싶다.

	// 방법 1. push_back 사용
	for (auto e : v)
		s1.push_back(e);

	// 방법 2. 삽입삽복자 와 std::copy 사용
//	std::back_insert_iterator< std::list<int> > bi(s2);
//	std::copy(v.begin(), v.end(), bi);

	// std::copy 사용시는 아래 처럼 "삽입반복자를 만드는 함수"를 사용하면
	// 편리합니다
	// std::back_inserter(s2) : 위의 bi 같은 삽입 반복자 객체를 만드는 함수
	std::copy(v.begin(), v.end(), std::back_inserter(s2) );
}



