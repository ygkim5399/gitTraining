#ifndef DAY5
#include <iostream>
#include <thread>
#include <atomic>
// atomic

//int x = 0;

//void foo()
//{
//	x = x + 1;	// �� �ڵ�� ��Ƽ �����忡���� �������� �ʽ��ϴ�.

//	m.lock();	// �̷��� �ص� ������,
//	x = x + 1;	// �ܼ��� 1������ ����
//	m.unlock(); // mutex �� ����ϴ� ���� ������尡 Ů�ϴ�.

	// �̷� ���� ������ �����ϰ� 1�����ϱ����� 
	// OS �� �ƴ� CPU �� �����ϴ� ����� ����ϴ� ���� �����ϴ�
	// lock ��� : ���� CPU ���, �ϳ��� CPU �� ����ϴ� ������ �ٸ� CPU��
	//			   ���� ���ϰ�
	/*
	__asm
	{
		lock inc x
	}
	*/
	//}


std::atomic<int> x = 0; // �� Ŭ������ ���� ���� �������� ���� Ŭ����
// atomic
// CPU �����ϴ� ��ɾ�� �ӵ��� ����

void foo() {
//	x.fetch_add(1); // lock ��� ���
	++x;			// ���� ����
}

int main()
{
	std::thread t(&foo);
	t.join();
}


#endif