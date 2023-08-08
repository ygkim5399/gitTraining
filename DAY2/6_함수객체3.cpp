#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

struct IsDivide
{
	int value;

	IsDivide(int n) : value(n) {}

	bool operator()(int n) { return n % value == 0; }
};

int main()
{
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// �־��� �������� "k�� ���" �� ã�� �ʹ�.
	int k = 3;

	IsDivide f(k); // f�� ���������� k���� �����ϰ� �˴ϴ�.

	auto p1 = std::find_if(v.begin(), v.end(), f );
}


