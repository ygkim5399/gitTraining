#include <iostream>
#include <thread> 

void foo(int n, double d)
{
	std::cout << "foo" << std::endl;
}

class Test
{
public:
	void goo(int n, double d)
	{
		std::cout << "goo" << std::endl;
	}
};

int main()
{
	// 1. �����带 �����ϴ� ���
	std::thread t(&foo, 1, 3.4 ); // �̼��� �����尡 �����Ǿ foo ����

	// 2. �����带 ������ ���, �ݵ�� �Ʒ� 2�߿� �Ѱ����۾��� �ؾ� �մϴ�.
	t.join();	// ������ ���Ḧ ��� �ϰų�
//	t.detach(); // ���ο� �����带 ���罺���忡�� �и�
}


