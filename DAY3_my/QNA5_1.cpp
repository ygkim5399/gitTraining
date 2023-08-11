#ifndef DAY3
#include <string>

// ADL �� �� ���������? 
// -> ������ ������ ������ ź���� �����Դϴ�.

namespace Graphic {
	struct Point {
		int x, y;
	};
	void init(const Point& pt){}
	Point operator+(const Point& p1, const Point& p2) {
		Point temp = { p1.x + p2.x, p1.y + p2.y };
		return temp;
	}
}


//Point operator+(const Point& p1, const Point& p2) {
//	Point temp = { p1.x + p2.x, p1.y + p2.y };
//	return temp;
//}
int main() {
	Graphic::Point p1 = { 1,2 };
	Graphic::Point p2 = { 1,2 };

	p1 + p2;

	// ADL �� �����ٸ� "p1+p2�� ���ؼ�
	operator+(p1, p2); // error
	Graphic::operator+(p1, p2); // ok

	// �׷��� ������ operator+ �� ���� ȣ������ �ʰ�, +�� ����մϴ�.
	p1 + p2; // �� ���� �����Ϸ��� operator+(p1, p2) �� ã�ƾ��ϴµ�
			// ADL �� ���ٸ� ã�� �� ���� �˴ϴ�.
	std::string s1 = "AAA";
	std::string s2 = "BBB";

	auto s3 = s1 + s2; // �� �ڵ尡 ������ ������ ADL �����Դϴ�.
						// operator+(string, string)�� std:: �� �ֽ��ϴ�. 

	// ADL �� ���ٸ� string ������ �Ʒ� ó���ؾ� �մϴ�.
	auto s4 = std::operator+(s1, s2);
}


#endif