#include <iostream>
#include <functional>
using namespace std::placeholders;

void f1(int a)               { printf("f1 : %d\n", a); }
void f2(int a, int b)        { printf("f2 : %d, %d\n", a, b);}
void f3(int a, int b, int c) { printf("f3 : %d, %d, %d\n", a, b, c); }
void f4(int a, int b, int c, int d) { printf("f4 : %d, %d, %d, %d\n", a, b, c, d);}

int main()
{
    // C 언어의 함수 포인터는 유연성이 부족합니다.
//  void(*f)(int) = &f1; // ok
//  f = &f2;             // error. f2는 인자의 갯수가 2개


    // std::function<> : 함수 포인터 처럼 동작하게 만든 도구

    // std::function<함수타입>
    // 
    // void(*)(int) : 함수 포인터 타입
    // void(int)    : 함수 타입

    std::function<void(int)> f;

    f = &f1;
    f(10); // f1(10) 즉, f는 함수 포인터처럼 생각하고 사용하면 됩니다.

    // function 은 std::bind() 결과를 보관 했다가 호출 가능합니다.
//  f = &f2; // error. f2는 인자가 2개. 

    f = std::bind(&f2, 5, _1);
    f(10); // f2(5, 10)
    
}













//
