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

// 1. ������ �Լ��� promise ��ü�� ������ �޾ƾ� �մϴ�.
void foo( std::promise<int>& p )
{
	std::this_thread::sleep_for(5s);

	// 2. �� �����忡 ����� �˸��� ������ promise �� set_value ���
	p.set_value(100);
}

int main()
{
	// 3. �ֽ����忡�� promise ��ü�� �����ϰ� future�� �����ϴ�.
	std::promise<int> p;

	std::future<int> ft = p.get_future();

	// 4. ������ ���鶧 promise ��ü�� ������ �����ؾ� �մϴ�.
	std::thread t(&foo, std::ref(p) );
			
	
	// �ֽ������ �ڽ��� �ϰ� ���� �۾��� �ϴٰ�..
	std::cout << "continue main" << std::endl;

	// 5. �����尡 �����ϴ� ������ ����� �ʿ��ϸ�
	//    future ��ü�� ���ؼ� ��� ���� �˴ϴ�.
	int ret = ft.get(); // 1. �����尡 set_value �ߴٸ� �ٷ� ������
						// 2. ���� ���ߴٸ� ������.. 
						// ft.wait() ������ Ư�� �ð� ��ŭ ��⵵ ����
	std::cout << "result : " << ret << std::endl;

	t.join();
}


