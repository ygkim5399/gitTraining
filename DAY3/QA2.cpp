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
	set(x, 10); // ok..   x = 10,   x �� lvalue
	set(3, 10); // error. x = 10,   3 �� rvalue
	set(foo(), 10); // error.  foo �� ��ȯ���� n �� �ƴ� 3

	// �ٽ� : int& �� int Ÿ���� lvalue �� ������ �ִ�.

	std::vector<int> v = { 1,2,3,4,5 };
	auto it = v.begin();
	std::advance(it, 3);
	std::advance(v.begin(), 3);

}