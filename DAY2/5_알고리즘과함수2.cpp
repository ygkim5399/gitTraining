#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

// 이항 함수
int foo(int a, int b) { return a + b; }

int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10 };
    std::list<int> s3;

    // transform 알고리즘
    std::transform( s1.begin(), s1.end(),  // 1. 이 구간의 모든 요소를
                    s2.begin(),            // 2. 이 구간의 요소와 함께
                    std::back_inserter(s3),// 4. 이곳에 넣어달라
                    foo);                  // 3. 이함수에 보낸후 반환값을

    show(s3);

	return 0;
}



















//
