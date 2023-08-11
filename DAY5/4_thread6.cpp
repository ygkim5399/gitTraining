#include <iostream>
#include <thread>

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

void foo()
{
//	x.fetch_add(1);		// lock ��� ���
	++x; // ���� ����
}



int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	t1.join();
	t2.join();
}