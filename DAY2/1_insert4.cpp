#include <iostream>
#include <list>
#include <vector>
#include <iterator>

// 삽입반복자종류 3가지
// 전방 삽입
// 후방 삽입
// 임의 삽입

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::list<int> s = { 0, 0, 0, 0, 0 };
	
	// 1. 후방 삽입 반복자 - s.push_back 사용
//	std::back_insert_iterator< std::list<int> > bi(s);
//	std::copy(v.begin(), v.end(), bi);
					// 0, 0, 0, 0, 0, 1, 2, 3, 4, 5

	// 2. 전방 삽입 반복자 - s.push_front 사용
//	std::front_insert_iterator< std::list<int> > bi(s);
//	std::copy(v.begin(), v.end(), bi);
					// 5, 4, 3, 2, 1, 0, 0, 0, 0, 0

	// 3. 임의 삽입 - s.insert 사용
	// => 생성자 인자가 2개 ( 컨테이너 와 위치(반복자) )
	// std::next(s.begin(), 2) : s 의 시작 부터 2칸 전진한 반복자
//	std::insert_iterator< std::list<int> > bi(s, std::next(s.begin(), 2));
//	std::copy(v.begin(), v.end(), bi);
						// 0, 0, 1, 2, 3, 4, 5, 0, 0, 0

	// 참고 : 임의 삽입을 통해서 제일 앞쪽에 넣기
	std::insert_iterator< std::list<int> > bi(s, s.begin());
	std::copy(v.begin(), v.end(), bi);
						// 1,2,3,4,5,0,0,0,0,0

	// 전방 삽입 반복자로 앞에 넣기 : 기존 요소가 거꾸로   삽입됩니다.
	// 임의 삽입 반복자로 앞에 넣기 : 기존 요소가 순서대로 삽입됩니다.
	//------------------------------------------------------------


	for (auto n : s)
		std::cout << n << ", ";
}
