// QA1.cpp
#include <vector>
#include <algorithm>

void foo(int a) {}

void goo(int a)    {}
void goo(double a) {}

int main()
{
	auto p1 = &foo;
	auto p2 = &goo;
}