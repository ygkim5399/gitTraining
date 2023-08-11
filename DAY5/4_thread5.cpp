#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;


// �Ϲ� �Լ���� �Ʒ� ó�� ����� �˴ϴ�
// �׷���, promise future �� ����Ϸ��� �Ʒ� �Լ��� �ٷ� ����Ҽ� ����
// �����ؾ� �մϴ�.
// => ���ڷ� promise<int>& �߰�
int add(int a, int b)
{
	std::cout << "add start" << std::endl;
	std::this_thread::sleep_for(5s);
	return a + b;
}
int main()
{
	// async ��
	// => �����带 ������� ���� �Լ��� ������� �����ؼ�
	//    ��ȯ���� ������ �ִ� ���
	std::future<int> ft = std::async(add, 1, 2);

	std::cout << "continue main" << std::endl;

	// ������� �����ϴ� ������ ����� �ʿ� �Ҷ�
	int ret = ft.get();

	std::cout << "result : " << ret << std::endl;
}
// async �� �ǹ�
// => ������ ������ �Լ��� �������� �ʰ�,
// => ������� ������ ����� ������ �ְ� �Ѱ�!!!


// std::async       : ���� �Լ��� �������� �ʰ�, ������� ������
//					  ����� ��� �Ѱ�
//					  ���������� "std::thread, promise, future"���
//----------------------------------------------------------
// promise&future   : �����忡�� ���� ������ ����� �����Ѱ�
//					  ������ ������ "std::thread" ���
//----------------------------------------------------------
// std::thread		: �����带 ����� ���� �⺻ ���� ���
//					  ������ �Լ� ����� �������� ���� �ڵ� �强

// openmp : C++11 ǥ���� ������ ������, �����带 �����ϱ� ���� ���¼ҽ�
//			