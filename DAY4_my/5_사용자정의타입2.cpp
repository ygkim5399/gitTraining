#ifndef DAY4
#include <vector>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) 
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }
	
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "Point(const Point&)" << std::endl;
	}
};
int main()
{
	std::vector<Point> v;

	// ������ ������ ������
	// 1. ��ü�� ������ �ֱ�.
	//Point pt(1, 2);
	//v.push_back(pt);	// pt �� �����ϴ� ���̾ƴ϶�, pt �� ���纻�� �����ϴ� ��!
						// pt ��ü�� �����ϴ� ���� �ƴ�
						// ���ۿ� Point �� �߰��ϰ� pt�� ���� (���������)
	// 5�� ȣ��
	// pt ����, pt���纻 ����, ����, pt �Ҹ�, pt ���纻 �Ҹ�


	// ����, vector �� ��� �� ���� �߰��Ϸ��� �ϴ� �����
	// 1. Point ��ü�� ���� ���� - v.push_back(pt) ��������
	// 2. Point ��ü�� ����� ���� ������ ���� (x, y��)�� �����ϴ� ����
	// ȿ�����Դϴ�. (���� �ϴµ� ��������)
	// 
	v.emplace_back(1, 2);	// �� ����Լ��� ����������
							// new Point(1,2) �� �߰�

	std::cout << "------------------" << std::endl;	
}

// ����
// �����̳ʰ�
// 1. primitive type(int, double, char ��) �� �����ϴ� ���
// -> std::vector<int>
// -> push_xxx(), insert() ... �� ����ϸ� �˴ϴ�.
// -> ����, emplace_xxx() �� ����ص� �˴ϴ�.

// 2. �����̳ʰ� ����� ���� Ÿ���� �ּҸ� �����ϴ� ���
// -> std::vector<Point*> v;
// -> �ּҴ� �ᱹ ������(32bit, 64bit) �� �ǹ��Դϴ�.
// -> push_xxx(), insert() ... �� ����ϸ� �˴ϴ�.
// -> ����, emplace_xxx() �� ����ص� �˴ϴ�.

// 3, �����̳ʰ� ����� ���� Ÿ���� "��"���� �����ϴ� ���.
// -> std::vector<Point> v;
//
// Point pt;		// �ܺο��� ��ü�� �����
// v.push_back(pt); // pt�� ���纻 ����
//					// ��, 2���� ��ü�� ������ ��!!
// v.emplace_back(1,2);	// emplace_back �ȿ��� ��ü����
//						// �� �Ѱ��� ��ü!!
// -> push_xxx() ��� emplace_xxx() �� �����մϴ�.
// -> push_front()	=>	emplace_front()
// -> push_back()	=>	emplace_back()
// -> insert()		=>	emplace()

#endif