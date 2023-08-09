#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "show.h"

// �����̳ʸ� �����ϴ� �����̳�

int main()
{
	// 1. int �� �����ϴ� vector
	std::vector<int> v1(10, 0);
	v1[0] = 10;


	// 2. �����̳ʸ� �����ϴ� �����̳ʸ� ����ϸ�
	// => ������ �ڷᱸ���� �ѹ��� ����� �ֽ��ϴ�.
	std::vector<std::vector<int>> v2(10, std::vector<int>(10));
	
	v2[0][0] = 0;


	std::vector<std::list<int>> v3(10);
	
	v3[0].push_back(1);
	v3[0].push_back(2);

	v3[1].push_back(10);
	v3[1].push_back(20);
}