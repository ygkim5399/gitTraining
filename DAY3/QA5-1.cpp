// QA5-1
// ADL �� ��?? ��������� ?
// => ������ ������ ������ ź���� �����Դϴ�.
namespace Graphic
{
	struct Point
	{
		int x, y;
	};
}

Point operator+(const Point& p1, const Point& p2)
{
	Point temp = { p1.x + p2.x, p1.y + p2.y };
	return temp;
}

int main()
{
	Graphic::Point p1 = { 1,2 };
	Graphic::Point p2 = { 1,2 };

	p1 + p2;
}