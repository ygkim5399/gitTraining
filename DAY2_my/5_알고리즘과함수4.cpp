#ifndef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;


bool foo(int a) {
	return a % 3 == 0;
}



int main()
{
	//std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };


	auto p1 = std::find_if(v.begin(), v.end(), foo);
	auto p2 = std::find_if(v.begin(), v.end(), [](int a) {return a % 3 == 0; });

	int k = 3; // ����ڰ� �Է��� ���̶�� ����

	// �־��� �������� k�� ����� ã��ʹ�.
	// -> foo �Լ��� ��� ������ �ұ��? 
	//	�� gfoo �� find_if �� �������� ���ڴ� �Ѱ��̾�� �մϴ�.
	// -> ���������� ���ԵǾ�� �մϴ�. 

	//auto p1 = std::find_if(v.begin(), v.end(), foo(k));
	
	// -> ���� ǥ������ "���������� ĸ��"�� �� �����Ƿ� ���� �� �� �ֽ��ϴ�. 
	auto p2 = std::find_if(v.begin(), v.end(), [k](int a) {return a % k == 0; });


	// find_of ���ڷ� �Ϲ��Լ�(foo) �� ����ϸ�
	// -> ���� �Լ��� ���� �� �ֽ��ϴ�.

	// find_of ���ڷ� ����ǥ������ ����ϸ�
	// -> �����Լ� + main �� ���������� ���� ���� �����մϴ�.
	// -> �̰��� Ŭ����(closure) ��� �մϴ�. 

	// Ŭ���� (closure)
	// -> ���ƿ� ���� ���������� ĸ���� �� �ִ� ����� ���� �Լ�


	return 0;
}



















//
#endif