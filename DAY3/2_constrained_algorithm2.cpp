#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,-2,3,-4,5,-6,7,-8,9,-10 };

	// �� ��å�� ����(���밪���� ����)�ϰ� �ʹ�.
	
	// C++98 ���� : �� �Լ��� ���� �Լ� ����
	std::sort(v.begin(), v.end(), [](int a, int b) { return abs(a) < abs(b); });


	// Python : �����Լ��� ����..
	sort(v.begin(), v.end(), [](int a) { return abs(a); });




	show(v);
}