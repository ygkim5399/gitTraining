#include <string>
// QA5-1
// ADL 은 왜?? 만들었나요 ?
// => 연산자 재정의 때문에 탄생한 문법입니다.
namespace Graphic
{
	struct Point
	{
		int x, y;
	};
	Point operator+(const Point& p1, const Point& p2)
	{
		Point temp = { p1.x + p2.x, p1.y + p2.y };
		return temp;
	}
}

int main()
{
	Graphic::Point p1 = { 1,2 };
	Graphic::Point p2 = { 1,2 };

	// ADL 이 없었다면 
	operator+(p1, p2); // error
	Graphic::operator+(p1, p2); // ok

	// 그런데, 보통은 operator+ 를 직접 호출 하지 않고, + 만 사용합니다.

	p1 + p2; // 이순간 컴파일러가 operator+(p1, p2) 를 찾아야 하는데
			 // ADL 이 없다면, 찾을수 없게 됩니다.

	std::string s1 = "AAA";
	std::string s2 = "BBB";

	auto s3 = s1 + s2; // 이 코드가 가능한 이유는 ADL 때문 입니다.
					// operator+(string, string) 은 std:: 안에 있습니다.
	
}