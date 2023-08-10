#include <iostream>
#include <memory>

int main()
{
	std::shared_ptr<int>  sp1(new int); // ok. sp1 �Ҹ��ڰ� delete ����!!


//	std::shared_ptr<int>  sp2(new int[10]); // ����
						// => new [] �� ����� ���, delete �� [] ���� ����ؾ� �մϴ�.
						// => sp2�� �Ҹ��ڴ� "delete[]" �� �ƴ� "delete" ���

	std::shared_ptr<int>  sp2(new int[10], [](int* p) { delete[] p; } ); // ok

	// C++17 ���ʹ� �Ʒ� ó���Ҽ� �ֽ��ϴ�.
	std::shared_ptr<int[]>  sp3(new int[10]); // ok. �Ҹ��ڰ� delete[] ����


	// �׷���.. ���⼭, �����غ� ����
	// int Ÿ�� 10���� �����Ҵ� �ҰŶ��....
	// 1. ��?? ����Ʈ�����͸� ����ϴ°� !!!!
	// 2. vector �� �ִµ�, std::vector<int> v(10)

	// ��ü �������� ���� ����� �����Ϸ��� : vector ����
	// ��ü �Ѱ��� ���� ����� ���� : ����Ʈ ������ ����
}

// ���̽� �ڵ�. 
// �Ʒ� �ڵ��� �޸� ����
//n1 = 10
//n2 = n1


//n1 = 3.4;


