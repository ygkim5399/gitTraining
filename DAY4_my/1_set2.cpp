#ifndef DAY4

#include <iostream>
#include "show.h"

#include <set> // Red Black Tree로 구현 (균형잡힌 tree)

// set 의 설계 원리를 생각해 봅시다.
// -> "단위전략" 디자인을 생각하면서 코드를 보세요
/*
template<typename T, // 저장할 타입
		typename Pr = std::less<T>,				//요소의 비교에 사용할 함수객체
		typename Alloc = std::allocator<T>>		// 메모리 할당기
class set {
	Alloc	ax;		// 메모리 할당 도구 - 반드시 allocate, deallocate 가 있어야 한다.
	Pr		cmp;	// 요소 비교에 사용할 함수객체, 반드시 "operator()(T, T)" 가 있어야한다.
	T		root;
public:
	std::pair<iterator, bool> insert(const T& newelem) {
		//if (root < newelem) // 이렇게 직접 < 했다면 사용자가 비교정책을 교체할 수 없습니다.
		if (cmp(root, newelem)) {
			add right_child;
		}
		else if (cmp(newelem, root)) {
			add left_child;
		}
		else {
			// fail; // 이미 요소가 있다는 의미
		}
	}

};
*/

struct MyCompare {
	inline bool operator()(int a, int b) const {
		return abs(a) < abs(b);
	}
};
int main()
{
	// 핵심 1. 비교 정책의 변경
	//std::set<int, std::greater<int>, MyCompare> s; // abs(a) < abs(b)
	std::set<int, std::greater<int>> s; // a>b
	s.insert(20);
	s.insert(-30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	
	show(s);


	// 아래 코드를 평가해보세요
	auto ret1 = std::find(s.begin(), s.end(), 30);


	// 핵심 2. c++ 초보자가 헷갈려 하는것
	// std::less<int>	: 타입입니다. (int 같은)
	// std::less<int>()	: 임시객체 생성 (즉, 타입이 아닌 객체(변수))

	// std::sort(v.begin(), v.end(), std::less<int>());	// 함수 인자는 객체전달
	// std::set<int, std::less<int> > s2;					// 템플릿 인자는 타입을 전달

}







#endif