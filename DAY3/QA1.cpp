// QA1.cpp
#include <vector>
#include <algorithm>

void foo(int a) {}

void goo(int a)    {}
void goo(double a) {}

int main()
{
	auto p1 = &foo; // ok. foo �̸��� �Լ��� �Ѱ��̹Ƿ�
					//	   �����Ϸ��� � �Լ����� �˼� �ִ�
//	auto p2 = &goo;	// error. goo ��� �̸��� �Լ��� �������̹Ƿ�
					//			��� �Լ����� �˼� ����
	auto p2 = static_cast<void(*)(int)>(&goo); // ok

	//-------------------------------------
	std::vector<int> v = { 1,2,3,4 };

	// projection ���� �̹� C++ ǥ�ؿ� �ִ� �����Լ� ������ �ȵǳ��� ?
//	std::ranges::sort(v, {}, &std::abs);

	std::ranges::sort(v, {}, static_cast<int(*)(int)>(&std::abs) );
}

