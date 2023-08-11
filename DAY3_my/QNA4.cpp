#ifdef DAY3

#include <iostream>
#include <algorithm>


using namespace std; // 왜 이코드를 사용하지 않는지?
					// -> 실전에서는 되도록 std 열어놓지 마세요


int count = 10;

int main() {
	int n = count; // ?? 왜 에러일까요? 원인 생각해보세요
					// C++ 표준에 std::count() 가 있습니다. 
					// using namespace std; 때문에 이름 충돌이 발생!
	
}

#endif