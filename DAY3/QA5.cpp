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
				// 인자 pt 가 Graphics 이름 공간 안에 있으므로
				// init 을 찾을때 자동으로 Graphics 이름 공간도 검색에 포함
				// "인자 기반 탐색( Argument Dependent Lookup, ADL)"
}