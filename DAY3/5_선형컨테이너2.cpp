
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// 1. ����
	std::vector<int> v1;		// ��Ұ� ����
	std::vector<int> v2(10);	// 10�� ��Ҹ� 0���� �ʱ�ȭ
	std::vector<int> v3(10, 3);	// 10�� ��Ҹ� 3���� �ʱ�ȭ
	std::vector<int> v5{10, 3}; // 2���� 10, 3 ���� �ʱ�ȭ
	std::vector<int> v6 = { 1,2,3 }; // 3���� 1, 2, 3

	std::vector<int> v4(v3); // v3 �� ��Ҹ� ����!!


	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 2. ����, 
	

	// 3. ����
	
	// 4. ��� ����

}