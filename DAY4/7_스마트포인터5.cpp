#include <iostream>
#include <memory>


void* operator new(size_t sz)
{
	std::cout << "new : " << sz << std::endl;
	return malloc(sz);
}

struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// �Ʒ� �ڵ�� ���� �޸� �Ҵ��� ����ϰ� �ɱ�� ? 2��
	// 1. ����ڰ� ���� �ڵ��� new Point(1,2)
	// 2. shared_ptr ������ �ȿ��� "������ü(���������)"�� ���鶧 new ���

	// �Ʒ�ó�� ����ϸ�
	// => Point ��ü�� "������ü"�� ���� �Ҵ��ϰ� �˴ϴ�.
//	std::shared_ptr<Point> sp(new Point(1, 2));


	// �Ʒ�ó�� ����ϸ� make_shared ��
	// 1. Point ��ü�� "������ü"�� ���� (����������)�Ҵ��ϰ�
	// 2. �ش� �޸𸮸� �����ϴ� shared_ptr �� ��ȯ�� �ݴϴ�
	// �ᱹ ���� ������ �ǹ� �ֵ�, ���� ȿ�������� �޸𸮸� �����ϰ� �˴ϴ�.
	std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2);
	
	
	// ���, ����Ʈ ������(shared_ptr) �� ����Ұ� �̶�� 
	std::shared_ptr<Point> sp1(new Point(1, 2)); // bad, �̷��� ��������
	std::shared_ptr<Point> sp2 = std::make_shared<Point>(1, 2); // good. �̷��� �ϼ���
	
}

