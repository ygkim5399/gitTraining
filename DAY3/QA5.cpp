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

	init(pt); // ???? 왜 에러가 아닐까요 ??

}