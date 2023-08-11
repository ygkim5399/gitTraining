#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// �Ϲ� �Լ���� "����� ��ȯ��" ���� ���� �մϴ�.
int add(int a, int b)
{
	return a + b;
}

// ������� ������ �Լ��� ����� �ֽ����忡�� ��������
// => 1. �������� ������ ���� �ϰų� 
// => 2. promise & future ����� ���. <== ����..

// promise & future

void foo()
{
	std::this_thread::sleep_for(5s);
}

int main()
{
	std::thread t(&foo);
						
	t.join();
}


