#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// �߸��� index �� ����߽��ϴ�.
	// 1. ���� �߻��Ұ��̴�. throw...
	// 2. ������ ���� �ɰ��̴�
	v[10] = 0;
}