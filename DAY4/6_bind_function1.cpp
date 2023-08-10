#include <iostream>
#include <algorithm>
#include <functional>

// 4항 함수
void foo( int a, int b, int c, int d)
{
    printf("%d, %d, %d, %d\n", a, b, c, d);
}

int main()
{
    foo(1,2,3,4);   // 4항 함수..

    // std::bind : M항 함수의 일부 인자를 고정해서
    //             N항 함수를 반환. (단, M > N )

    std::bind(&foo, 3, 4, 1, 2);
}

