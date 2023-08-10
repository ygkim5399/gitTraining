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
//	Point pt(1, 2);
//	v.push_back(pt); // pt ��ü�� �����ϴ� ���� �ƴ�
					 // ���ۿ� Point �� �߰��ϰ� pt �� ����(���������)

	// ����, vector �� ��� �Ѱ��� �߰��Ϸ��� �ϴ� ��� ���
	// 1. Point ��ü�� ���� ����(v.push_back(pt))  ���� ����
	// 2. Point ��ü�� ����� ���� ������ ����(x, y��)�� �����ϴ� ����
	//    ȿ�����Դϴ�.

	v.emplace_back(1, 2); // �� ��� �Լ��� ����������
						  // new Point(1,2) �� �߰�!


	std::cout << "------------------" << std::endl;	
}



