#include <iostream>
#include <functional>
using namespace std::placeholders;

void foo(int a, int& r) { r = 200; }

int main()
{
	std::function<void(int)> f;

	int n = 10;

	f = std::bind(&foo, _1, n); 

	f(0); // 1. foo(0, n);
		  // 2. foo(0, 10);

	std::cout << n << std::endl;
}