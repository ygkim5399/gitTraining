// 5_���������̳�3-1
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1;		// size = 0,   capacity = 0
	std::vector<int> v2(100);	// size = 100, capacity = 100

	std::vector<int> v3;
	v3.reserve(100);			// size =0, capacity = 100

	
	v2.push_back(5); // 101��°�� �ֱ�, �޸� ���Ҵ� �߻�
	v3.push_back(5); // 1��° �ֱ�,    �޸� ���Ҵ� �ȵ�.

}




