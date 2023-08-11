#ifndef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;


// ������ (predicator) : ��ȯ Ÿ���� bool �� �Լ�
// ���� ������ : ���ڰ� �Ѱ��� ������

// find_if �� 3��° ���ڴ� "unary predicator(����������)" �̾���մϴ�. 

bool foo(int a) {
	return a % 3 == 0;
}

int main()
{
	//std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// std::find	: �� �˻�
	// std::find_if : ���� �˻�

	// �־��� �������� 3�� ã�� �ʹ�
	auto p1 = std::find(v.begin(), v.end(), 3);

	// �־��� �������� 3����� ã�� �ʹ�
	auto p2 = std::find_if(v.begin(), v.end(), foo);

	//auto p2 = std::find_if(v.begin(), v.end(), [](int a) {return a % 3 == 0; });

	cout << *p2 << endl;

	return 0;
}



















//
#endif