#ifndef DAY3

namespace Graphic {
	struct Point {
		int x, y;
	};
	void init(const Point& pt) {}

}


int main() {
	//Point pt; // error;
	Graphic::Point pt; // ok

	init(pt); // �� ������ �ƴұ��?? 
			// c++ ������ ��� �Լ��� �˻��Ҷ� 
			// ���ڰ� ���ԵǾ� �ִ� ���� �ڵ����� �˻��ȴ�.
			// ���� pt �� Graphics �̸� �����ȿ� �����Ƿ� 
			// init �� ã���� �ڵ����� Graphics �̸� ������ �˻��� ����
			// "���ڱ�� Ž�� (Argument Dependent Lookup, ADL)"


}


#endif