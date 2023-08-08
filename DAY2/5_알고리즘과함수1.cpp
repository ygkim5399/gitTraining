#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;

// 단항(unary)  함수 : 인자가 1개인 함수
// 이항(binary) 함수 : 인자가 2개인 함수

void foo(int n) { std::cout << n << std::endl; }

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    
    // 1. 알고리즘의 인자로 함수가 전달되는 경우가 많이 있습니다.
    // for_each 알고리즘
    std::for_each(v.begin(), v.end(), foo);

    // 2. 일반 함수 보다는 "람다 표현식"을 권장 합니다.
    // [] : 람다 표현식이 시작됨을 알리는 "lambda introducer"
    std::for_each(v.begin(), v.end(), 
                [](int n) { std::cout << n << std::endl; });


	return 0;
}



















//
