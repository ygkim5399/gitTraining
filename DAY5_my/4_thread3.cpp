#ifndef DAY5

#include <iostream>
#include <thread>
#include <mutex>


std::mutex m;	// mutex �� �ƴ϶� ������ ����ȭ���� ���Ǵ�
				// ��κ��� ������ c++ ǥ�� Ŭ������ �����մϴ�.
				// mutex, semaphore, condition_variable, barrier ��

int shared_data = 10;

void foo()
{
	m.lock();
	// ���� �ڿ� ���	
	shared_data = 200;	// ������ �ƴ� ���Ͽ� ���� �۾��̶��
						//	�����غ�����
						// ���� �����尡 ���Ͽ� ������ ��� ������ ������ -> ���ؽ� ������ ���
	m.unlock();
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}



#endif