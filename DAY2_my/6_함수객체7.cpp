#ifndef DAY2

// 3_�Լ���ü7 - 136 page�ҽ�
#include <iostream>
#include <algorithm>

inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }
struct Less   { inline bool operator()(int a, int b) { return a < b; }};
struct Greater{	inline bool operator()(int a, int b) { return a > b; }};

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// C++ ǥ�� sort()�� 3���� ���ڰ� ��� ���ø� �Դϴ�.
	// -> ����ڰ� ����ϴ� �ڵ带 ���� �����Ϸ��� "�Լ�(�ڵ�)�� �����Ѵ�"�� �ǹ�


	// 1. �� ��å���� �Ϲ��Լ� ����
	// ���� : ����å�� ������ ��ü�ص�, sort() �Լ� ��ü�� �Ѱ��� �����ȴ�. 
	//			-> cmp1, cmp2�� �ٸ� �Լ�����, ���� Ÿ���̹Ƿ�
	// ���� : ����å�Լ��� inline ġȯ�� �� ����.
	//			-> ������.  
	//			-> ������ ���� ���� ����... ����!

	std::sort(x, x + 10, cmp1); // sort(int*, int*, bool(*)(int, int)) ����� �Լ�����
	std::sort(x, x + 10, cmp2); // sort(int*, int*, bool(*)(int, int)) ����� �Լ�����

	// 2. ����å���� �Լ���ü ����
	// ���� : ����å�Լ��� inline ġȯ�� �� �ִ�.
	//			-> ������.
	//			-> ������ ���� ���ٸ� Ȯ���� �������ϴ�. 
	// ���� : ����å�� ��ü�� Ƚ�� ��ŭ�� sort() �Լ� ����
	//			-> �ڵ� �޸� ����!

	Less    f1;
	Greater f2;
	std::sort(x, x + 10, f1); // sort(int*, int*, Less		) ����� �Լ�����
	std::sort(x, x + 10, f2); // sort(int*, int*, Greater	) ����� �Լ�����
}


// �����;��� ����, ����å�� ������ ��ü�Ѵ�			: �Ϲ� �Լ�
// �����;��� ����, ����å�� ������ ��ü���� �ʴ´�	: �Լ� ��ü

// sort() ���� �Լ��� ������ ��ü�� ���� ���, ������ �����Ǿ ū ������ ����. 








#endif