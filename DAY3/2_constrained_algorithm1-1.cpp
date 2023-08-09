// 2_constrained_algorithm1-1
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// C++98 �˰��� : ���ڷ� �ݺ��ڸ� ���� ����
	auto ret1 = std::find(v.begin(), v.end(), 3);

	// C++20 �� ���ο� �˰��� : �ݺ��ڵ� �����ϰ�, �����̳ʵ� ����
	// std::ranges => namespace �̸�
	auto ret2 = std::ranges::find(v.begin(), v.end(), 3);
	auto ret3 = std::ranges::find(v, 3);
}