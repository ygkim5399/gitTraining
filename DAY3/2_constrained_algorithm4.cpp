#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	int n1 = std::max(1, 2);		// C++98 �˰����� "�Լ�(���ø�)" �Դϴ�
	int n2 = std::ranges::max(1, 2);// C++20 �˰����� "�Լ� ��ü" �Դϴ�.
	int n3 = std::ranges::max.operator()(1, 2);
}