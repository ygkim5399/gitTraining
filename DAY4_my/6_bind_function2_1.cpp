#ifndef DAY4

#include <iostream>
#include <functional>
using namespace std::placeholders;

void f1(int a) { printf("f1 : %d\n", a); }
void f2(int a, int b) { printf("f2 : %d, %d\n", a, b); }
void f3(int a, int b, int c) { printf("f3 : %d, %d, %d\n", a, b, c); }
void f4(int a, int b, int c, int d) { printf("f4 : %d, %d, %d, %d\n", a, b, c, d); }


class Dialog {
public:
	void close(int code, double result) {
		printf(" close %d, %lf\n", code, result);
	}
};
int main()
{

	std::function<void(int)> f;
	f = std::bind(&f3, _1, 0, 0);
	f(10); // f3(10,0,0);
	

	// ����Լ��� bind �� ���� ��ü�� ���� �����ؾ� �մϴ�. 
	// -> ��, static ����Լ��� ��ü�ʿ� �����ϴ�. 
	Dialog dlg;

	f = std::bind(&Dialog::close, &dlg, _1, 3.4);
	f(10); // dlg.close(10, 3.4)
	
	//-----------------
	// ���� ǥ���ĵ� ���� �� �ֽ��ϴ�.
	f = [](int a) {std::cout << "lambda" << std::endl; };
	f(10);
}













//
#endif