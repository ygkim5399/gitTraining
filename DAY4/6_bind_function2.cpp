#include <iostream>
#include <functional>
using namespace std::placeholders;

void f1(int a)               { printf("f1 : %d\n", a); }
void f2(int a, int b)        { printf("f2 : %d, %d\n", a, b);}
void f3(int a, int b, int c) { printf("f3 : %d, %d, %d\n", a, b, c); }
void f4(int a, int b, int c, int d) { printf("f4 : %d, %d, %d, %d\n", a, b, c, d);}

int main()
{
    // C ����� �Լ� �����ʹ� �������� �����մϴ�.
//  void(*f)(int) = &f1; // ok
//  f = &f2;             // error. f2�� ������ ������ 2��


    // std::function<> : �Լ� ������ ó�� �����ϰ� ���� ����

    // std::function<�Լ�Ÿ��>
    // 
    // void(*)(int) : �Լ� ������ Ÿ��
    // void(int)    : �Լ� Ÿ��

    std::function<void(int)> f;

    f = &f1;
    f(10); // f1(10) ��, f�� �Լ� ������ó�� �����ϰ� ����ϸ� �˴ϴ�.

    // function �� std::bind() ����� ���� �ߴٰ� ȣ�� �����մϴ�.
//  f = &f2; // error. f2�� ���ڰ� 2��. 

    f = std::bind(&f2, 5, _1);
    f(10); // f2(5, 10)
    
}













//
