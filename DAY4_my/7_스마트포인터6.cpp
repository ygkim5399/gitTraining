#ifndef DAY4

#include <iostream>
#include <memory>

void foo(void* p) { free(p); }

int main()
{
	// ������ ����
	std::shared_ptr<int>  sp1(new int); // ok, sp1 �Ҹ��ڰ� delete ����!

	std::shared_ptr<int>  sp2((int*)malloc(sizeof(int)));	// ����
									// �޸��Ҵ��� malloc, sp2 �Ҹ��ڴ� delete

	std::shared_ptr<int> sp3((int*)malloc(sizeof(int)), foo);
													// ok. �Ҹ��ڿ��� delete �������� foo ȣ���ش޶�

	std::shared_ptr<int> sp4((int*)malloc(sizeof(int)), free);
													// ok. �����ٴ� �̰� ����.

	//make_shared ���� �޸� �Ҵ� ��ü�� make_shared �ȿ��� �ϰ� �˴ϴ�.
	// -> ������ new ���
	std::shared_ptr<int> sp5 = std::make_shared<int>();

}







#endif