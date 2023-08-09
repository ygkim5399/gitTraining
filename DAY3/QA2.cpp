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
	std::advance(it, 3);
	std::advance(v.begin(), 3);

}