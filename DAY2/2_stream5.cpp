#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

	// �����̳��� ��� ��Ҹ� ȭ�� ����� ���� ���� �ֽ��ϴ�.
	// �Ʒ� �Լ��� ����� ���ô�.
	show(v);
	show(x);
}