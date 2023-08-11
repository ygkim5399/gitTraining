#ifndef DAY5
#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// �Ϲ� �Լ���� �Ʒ�ó�� ����� �˴ϴ�.
// �׷��� promise future �� ����Ϸ��� �Ʒ� �Լ��� �ٷ� ����� �� ����
// �����ؾ� �մϴ�.
// -> ���ڷ� promise<int>& �߰�

//int add(int a, int b) {
//	return a + b;
//}

int add(int a, int b) {
	std::cout << "add start " << std::endl;
	std::this_thread::sleep_for(3s);
	return a + b;
}



int main()
{
	// async ��
	// -> �����带 ������� ���� �Լ��� ������� �����ؼ�
	//	��ȯ���� ���� �� �ִ� ���
	std::future<int> ft = std::async(add, 1, 2);
	

	std::cout << "continue main" << std::endl;

	// ������� �����ϴ� ������ ����� �ʿ��� ��,
	int ret = ft.get();

	std::cout << ret << std::endl;
}
// async �� �ǹ�
// -> ������ ������ �Լ��� �������� �ʰ�
// -> ������ν��� �� ����� ���� �� �ְ� �Ѱ�!

// std::async	: ���� �Լ��� �������� �ʰ�, ������� ���� �� 
//				����� ��� �� ��
//				���������� std::thread, promise, future" ���
//-------------------------------------------------------
// promise&future	:	�����忡�� ���� ������ ����� ������ ��
//						������ ������ std::thread ���
// ------------------------------------------------------
// std::thread	: �����带 ����� ���� �⺻���� ���
//					������ �Լ� ����� �������� ���� �ڵ� �ۼ�


// openmp : c++11 ǥ���� ������ ������ �����带 �����ϱ� ���� ���¼ҽ�
// openmp �� ����� �� ����. 

#endif