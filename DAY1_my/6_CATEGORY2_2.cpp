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

// 반복자 : 결국 멤버데이터로 "포인터 한개" 가질뿐입니다.
//			크기 작습니다. call by value 로 받으세요
// value : 임의 타입임니다. std::string 이 될 수도있습니다.
//			const T& 가 좋습니다.
template <typename InputIter, typename T>
InputIter find(InputIter first, InputIter last, const T& value) {
	while (first != last && *first != value)
		++first;
	return first;
}

int main()
{
	std::list<int> s1 = { 1,2,3 };



	int x[3] = { 1,2,3 };
	auto p = find(std::begin(x), std::end(x), 2);

}
#endif