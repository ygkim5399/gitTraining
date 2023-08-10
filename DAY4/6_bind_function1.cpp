#include <iostream>
#include <algorithm>
#include <functional>
using namespace std::placeholders; // _1, _2, _3 ....

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

    // 사용법 : std::bind( M항함수, M개 인자 )

    std::bind(&foo, 3, 4, 1, 2)(); // 결국, foo(3, 4, 1, 2)의미
    //|<== bind 반환값이 함수=>|    // 4항함수 => 0항 함수로 변경한것


    std::bind(&foo, 8, _1, 6, _2)(3, 7);  // 4항 함수 => 2항 함수
                                          // foo(8, 3, 6, 7)

    std::bind(&foo, ?,?,?,? )(9, 4, 8); // foo(8, 9, 3, 4) 나오게 해보세요
}

