#ifndef DEBUG


#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <iterator>
/* 삽입반복자 종류 3가지
전방삽입
후방삽입
임의삽입
*/
template<typename C>
class eback_insert_iterator
{
};

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int> s = { 0,0,0,0,0 };

	// 1. 후방삽입 반복자 - s.push_back 사용
	//std::back_insert_iterator<std::list<int>> bi(s);
	//std::copy(v.begin(), v.end(), bi);
	// 0,0,0,0,0,1,2,3,4,5

	// 2. 전방삽입 반복자 - s.push_froont 사용
	//std::front_insert_iterator<std::list<int>> bi(s);
	//std::copy(v.begin(), v.end(), bi);
	//5,4,3,2,1,0,0,0,0,0

	// 3. 임의삽입 - s.insert 사용
	// -> 생성자 인자가 2개 (컨테이너와 위치(반복자))
	// std::next(s.begin(), 2) : s의 시작부터 2칸 전진한 반복자
	//std::insert_iterator<std::list<int>> bi(s,std::next(s.begin(), 2));
	//std::copy(v.begin(), v.end(), bi);
	// 0, 0, 1,2,3,4,5, 0, 0,0,
	// 참고 : 임의삽입을 통해서 제일 앞쪽에 넣기
	std::insert_iterator<std::list<int>> bi(s, s.begin());
	std::copy(v.begin(), v.end(), bi);
	// 1,2,3,4,5,0,0,0,0,0

	// 전방 삽입 반복자로 앞에넣기 : 기존요소가 거꾸로 삽입
	// 임의 삽입 반복자로 앞에넣기 : 기존요소가 순서대로 삽입
	//--------------------------------------
	// 실전에서는 위 처럼 클래스 버전보다는
	// 아래처럼 함수버전을 사용하는 것이 좋습니다.
	// -. 그리고 삽입반복자를 생성해놓고 계속사용하는 것은 좋지는 않습니다.
	std::copy(v.begin(), v.end(), std::front_inserter(s));
	std::copy(v.begin(), v.end(), std::back_inserter(s));
	std::copy(v.begin(), v.end(), std::inserter(s, s.begin()));


	//eback_insert_iterator<std::list<int>> p(s);

	//*p = 30; // ( p.operator*() ).operator=(30)

	for (auto& n : s)
		std::cout << n << ", ";
}


#endif