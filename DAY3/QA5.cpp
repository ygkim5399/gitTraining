// QA5
namespace Graphic
{
	struct Point
	{
		int x, y;
	};
	void init(const Point& pt) {}
}

int main()
{
//	Point pt; // error.
	Graphic::Point pt; // ok

	init(pt);	// ok..
				// ���� pt �� Graphics �̸� ���� �ȿ� �����Ƿ�
				// init �� ã���� �ڵ����� Graphics �̸� ������ �˻��� ����
				// "���� ��� Ž��( Argument Dependent Lookup, ADL)"
}