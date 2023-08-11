#ifdef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"



int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// 1. �⺻���� (in place, �� ����)
	auto p1 = std::remove(v1.begin(), v1.end(), 3);


	// 2. ������ ���� : _if, ������ ���ڰ� "�Լ� �Ǵ� ����ǥ����"
	//auto p1 = std::remove_if(v1.begin(), v1.end(),
	//						[](int n) {return n % 2 == 1; });

	// 3. ���� ���� : _copy
	// ���� : ��ȯ�� p1 �� v2 �� �ݺ����Դϴ�. 
	//auto p1 = std::remove_copy(v1.begin(), v1.end(),
	//							v2.begin(), 3);
	// v1 = same
	// v2 = 1,2, 4,5,6,7,8,9,10,0

	// 1. v1 -> v2 �� ���� �����ϰ� v2 �� remove �ϸ� �Ǵµ�
	// 2.. �� remove_copy �� ������ �����ϳ���? 
	// -> ���� �� remove �ϴ� 2�����꺸�� ȿ����

	// ���� : sort_copy() �� ������ �������?
	// -> sort() �� copy() �� ���� ���� �������̰� �ִ�.
	// -> copy() �� sort() �ص� sort_copy() �� ���ؼ� ���� ������ �ʴ�.


	// 4. ���� ������ ���� : _copy_if
	//auto p1 = std::remove_copy_if(v1.begin(), v1.end(), v2.begin(), 
	//							[](int n) {return n % 2 == 1; });
	//
	//// ���� : ��� ¦���� ã��ʹ�
	//// find_if �� �Ѱ��� ã�µ� ������ ã�� �� �� ������?
	//std::vector<int> result;
	//std::remove_copy_if(v1.begin(), v1.end(), std::back_inserter(result),
	//					[](int n) {return n % 2 == 1; });
	//show(p1);
	//show(v2);
}

#endif