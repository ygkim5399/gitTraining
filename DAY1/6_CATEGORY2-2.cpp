#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

// 반복자 : 결국 멤버 데이타로 "포인터 한개" 가질 뿐입니다.
//          크기 작습니다. call by value로 받으세요
// 
// value : 임의 타입입니다. std::string 이 될수도 있습니다.
//         const T& 가 좋습니다.
template<typename InputIter, typename T>
InputIter find(InputIter first, InputIter last, const T& value)
{
	while (first != last && *first != value)
		++first;
	return first;
}

int main()
{
	int x[3] = {1,2,3};

	auto p = find(std::begin(x), std::end(x), 2);

}