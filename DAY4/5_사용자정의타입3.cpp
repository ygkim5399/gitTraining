
#include <vector>
#include <algorithm>
#include "show.h"

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b)
	{
	}
	~Point() {  }

	void dump() const 
	{
		std::cout << x << ", " << y << std::endl;
	}

	bool operator<(const Point& pt) const { return y < pt.y; }
	bool operator==(const Point& pt) const { return x == pt.x && y == pt.y; }
};

int main()
{
	std::vector<Point> v;

	v.emplace_back(1, 2); // Point(1,2) �� ����
	v.emplace_back(2, 3);
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);

	// �ٽ� : ����� ���� Ÿ���� �����ϴ� �����̳ʿ�..
	//        Ư�� �˰����� ����Ϸ���
	// => �˰����� �䱸�ϴ� ������ ��������� Ÿ���� �����ؾ� �մϴ�.

	// => std::sort �� ����Ϸ��� Point Ÿ���� ũ�� ��(<)�� �����ؾ� �մϴ�.
//	std::sort(v.begin(), v.end());

	// ��� 1. std::sort �� 3��° ���ڷ� ũ�⸦ ���ϴ� �Լ�(����ǥ����) ����

	std::sort(v.begin(), v.end(),
		[](const Point& p1, const Point& p2) { return p1.y < p2.y; });

	// C++20 �̶�� ���ڵ带 �Ʒ� ó�� ������ �Ҽ� �ֽ��ϴ�
//	std::ranges::sort(v, {}, &Point::y);



	// ��� 2. Point Ÿ�� ��ü�� < ������ ������ �˴ϴ�.
	// STL �� ���������� < �� == �� ���� ����ϹǷ�
	// ����� ���� Ÿ���� < �� == �� �����ϸ� ���մϴ�.
	// std::sort �� 3��° ���ڸ� ������ ������ ���������� < ���. 
	std::sort(v.begin(), v.end());


	// �Ϲ������δ� "���1"�� �θ� ����մϴ�.
}




