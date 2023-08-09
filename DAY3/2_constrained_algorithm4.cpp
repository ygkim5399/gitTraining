#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	int n1 = std::max(1, 2);		// C++98 알고리즘은 "함수(템플릿)" 입니다
	int n2 = std::ranges::max(1, 2);// C++20 알고리즘은 "함수 객체" 입니다.
	int n3 = std::ranges::max.operator()(1, 2);
}