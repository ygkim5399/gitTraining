#ifndef DAY4
#include <iostream>
#include <memory>

///*
void* operator new(size_t sz)
{
	std::cout << "new : " << sz << std::endl;
	return malloc(sz);
}
//*/
struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// �Ʒ� �ڵ�� ���� �޸� �Ҵ��� ����ϰ� �ɱ�� ? 2��
	// 1. ����ڰ� ���� �ڵ��� new Point(1,2)
	// 2. shared_ptr ������ �ȿ��� "������ü(���������)" �� ���� �� new ���

	// �Ʒ�ó�� ����ϸ�
	// -> Point ��ü�� ������ü�� ���� �Ҵ��ϰ� �˴ϴ�.
	//std::shared_ptr<Point> sp(new Point(1, 2));
	
	// �Ʒ�ó�� ����ϸ� make_shared �� 
	// 1. Point ��ü�� ������ü�� ���� (����������) �Ҵ��ϰ�
	// 2. �ش� �޸𸮸� �����ϴ� shared_ptr �� ��ȯ�� �ݴϴ�.
	// �ᱹ ���� ������ �ǹ��ε�, ���� ȿ�������� �޸𸮸� �����ϰ� �˴ϴ�.
	std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2);

	// ���, ����Ʈ ������(shared_ptr) �� ����� ���̶��
	std::shared_ptr<Point> sp(new Point(1, 2)); // bad, �̷��� ��������
	std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2); // �̷��� �ϼ���
}





#endif