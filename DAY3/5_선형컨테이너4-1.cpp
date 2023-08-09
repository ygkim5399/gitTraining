#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// �߸��� index �� ����߽��ϴ�.
	// 1. ���� �߻��Ұ��̴�. throw...
	// 2. ������ ���� �ɰ��̴�
	try
	{
//		v[10] = 0;	  // 2. ������ ����, �߸��� index Ȯ�� ����
		v.at(10) = 0; // 1. ���� �߻�
	}
	catch (std::out_of_range& e)
	{
		std::cout << "���� �߻� : " << e.what() << std::endl;
	}

	std::cout << "main continue" << std::endl;


	for (int i = 0; i < v.size(); i++)
	{
		// ������ ���� �ڵ�� ?
		// => �ٽ��� i �� �߸����� �ʴ´ٴ� ��!!
		v[i] = 0;    // 1. ���� �ڵ�!!!
		v.at(i) = 0; // 2
	}
}