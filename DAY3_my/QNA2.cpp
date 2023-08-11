#ifndef DAY3

#include <vector>
#include <algorithm>

int foo()
{
	int n = 3;
	return n;
}

void set(int& n, int v)
{
	n = v;
}

int main()
{
	int x = 0;
	set(x, 10); // ok..   x = 10,   x 는 lvalue
	set(3, 10); // error. x = 10,   3 는 rvalue
	set(foo(), 10); // error.  foo 의 반환값은 n 이 아닌 3

	// 핵심 : int& 는 int 타입의 lvalue 만 받을수 있다.

	std::vector<int> v = { 1,2,3,4,5 };
	auto it = v.begin();
	
	// advance 모양 : advance(T&it, int n)
	// -> 따라서 advance 의 1번째 인자는 lvalue(이름있는 변수) 만 가능
	// -> v.begin()은 반복자를 임시객체(rvalue)로 반환
	
	std::advance(it, 3);
	std::advance(v.begin(), 3);

	// -> lvalue, rvalue 개념이 필요하고
	// -> T&은 임의 타입의 lvalue 만 받을 수 있다는 문법을 알아야 합니다.
	// -> 임시객체 개념을 알아야 하고, 임시객체를 rvalue라는 것도 필요

	std::advance(p, 3); // p자체를 이동
	std::next(p, 3);	// p자체는 변하지 않고, 새로운 반복자를 반환
}

#endif