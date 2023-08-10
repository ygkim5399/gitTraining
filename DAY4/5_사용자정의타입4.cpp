#include <vector>
#include <algorithm>
#include "show.h"

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b)
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }

	Point(const Point& p)
	{
		std::cout << "Point(const Point&)" << std::endl;
	}
	void dump() const
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{
	// �� ������ ������ ������ �򰥸��� ������
	std::vector<Point>  v1;
	std::vector<Point*> v2;
	//-------------------------------------------
	std::vector<Point*> v;

	v.push_back(new Point(1, 2));
	v.push_back(new Point(3, 1));
	v.push_back(new Point(4, 2));
	v.push_back(new Point(2, 2));

	// v�� sort �� ������.. �� ��å�� "����ǥ����" ���

//	std::sort(v.begin(), v.end()); // ������ �ƴ�����, 
									// ��ü�� ���¸� ���ϴ� ���� �ƴ϶�
									// �ּҸ� ũ�� ���ϴ� ��
									// �ǹ� ���� �ڵ�

	std::sort(v.begin(), v.end(),
		[](const Point* p1, const Point* p2) { return p1->x < p1->x; });


	for (auto p : v) 
		p->dump();

	for (auto p : v) delete p;

}




