#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// ������ ����� ���� �Լ�
// => ���ڷ� "�迭�� �ּ�" �� "ũ��" �� �ް� �ֽ��ϴ�.
void foo(int* arr, int sz) {}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10);

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// foo �� v�� ���� ������.
//	foo(v, v.size()); // error
//	foo(&v, v.size()); // error. v�� �ּ�����, 10�� ������ �ּҴ� �ƴ�.

	foo(&v[0], v.size()); // ok.. C++11 ������ ����ϴ� �ڵ�
	foo(v.data(), v.size()); // ok.. C++11 ������ ����ϴ� �ڵ�
}


