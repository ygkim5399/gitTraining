#ifndef DAY3


#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// 1. 생성
	std::vector<int> v1;			//  요소가 없다.
	std::vector<int> v2(10);		// 10개 요소를 0으로 초기화
	std::vector<int> v3(10, 3);		// 10개 요소를 3으로 초기화
	std::vector<int> v5{ 10, 3 };	// 2개를 10, 3으로 초기화
	std::vector<int> v6 = { 1,2,3 };// 3개를 1,2,3
	
	std::vector<int> v4(v3);		// v3의 요소를 복사!!


	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 2. 추가(삽입) 
	//v.push_front(10); // 전방 삽입. 단, vector는 안됨
	v.push_back(10);	// 후방 삽입
	//v.insert(위치, 20); // 위치(반복자) 앞에 20을 삽입
	v.insert(std::next(v.begin(), 3), 20);


	// 3. 제거
	//v.pop_front();	// 전방 삭제, 단, vector 는 안됨
	v.pop_back();		// 후방 삭제

	//v.erase(반복자);	// 한개 삭제
	//v.erase(반복자1, 반복자2);	// [반복자1 ~ 반복자2) 구간 삭제

	v.clear(); // 모두 제거

	// 4. 접근
	int n1 = v.front();	// ok. vector 도 가능
	int n2 = v.back(); 

	int n3 = v[3];		// vector, deque 만 가능, list 안됨.
	int n4 = v.at(3);	// vector, deque 만 가능, list 안됨.
						// [] 와 차이점은 뒤에서

	// list 의 임의 접근은 "반복자를 꺼내야 합니다"
	// auto p = list.begin();
	// std::advance(p, 4);


	// 5. 요소 변경
	std::list<int> s = { 1,2,3 };
	v.assign(s.begin(), s.end());	// v를 s.begin(), s.end() 의 요소로 교체



	// 생각보다 멤버함수가 적은 것 같습니다? 
	// -> 알고리즘이 있으므로!
	// -> sort 하고 싶으면 std::sort(v.begin(), v.end());
}	// -> 뒤집고 싶으면    std::reverse(v.begin(), v.end());

#endif