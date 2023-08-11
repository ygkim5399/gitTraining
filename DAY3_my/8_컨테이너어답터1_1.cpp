#ifndef DAY3


#include <iostream>

// list 가 이미 있습니다
#include <list>
#include <vector>
#include <deque>



template<typename T, typename C = std::deque<T>>
class stack {
	C c;
public:
	inline void push(const T& a)	{ c.push_back(a); }
	inline void pop()				{ c.pop_back(); }
	inline T& top() { return c.back(); }
};

#include <stack>	// STL stack, 이 헤더안에 위와 유사한 코드가 있습니다.
					// 흔히, sequence container adapter 라고도 합니다. 
int main()
{
	stack<int, std::list<int>> s1;
	stack<int, std::vector<int>> s2;
	std::stack<int> s3; // std::deque 로 사용

	s1.push(10);
	s2.push(20);
	
	std::cout << s1.top() << std::endl;
}

#endif