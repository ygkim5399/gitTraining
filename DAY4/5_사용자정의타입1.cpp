#include <vector>
#include "show.h"

// vector<int> �� �ƴ� 
// vector<Point> ��, ����� ���� Ÿ���� �����ϴ� �Ϳ� ���� �̾߱�!

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	// 1. ����Ʈ �����ڰ� ���� ���. 
	
//	std::vector<Point> v1(10); // error. 10�� ���鶧 ����Ʈ ������ ���
	std::vector<Point> v1(10, Point(0,0) ); // ok. Point(0,0) ��ü�� �����ؼ�
											// 10�� ����(���� �����ڻ��)

	std::vector<Point> v2 = { Point(0,0), Point(1,1), Point(2,2) };

	std::vector<Point> v3 = { {0,0}, {1,1}, {2,2} }; // C++11 ����
													// "�߰�ȣ �ʱ�ȭ" ����
}



