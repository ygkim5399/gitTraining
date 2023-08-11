#ifndef DAY3


#include <iostream>

// list �� �̹� �ֽ��ϴ�
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

#include <stack>	// STL stack, �� ����ȿ� ���� ������ �ڵ尡 �ֽ��ϴ�.
					// ����, sequence container adapter ��� �մϴ�. 
int main()
{
	stack<int, std::list<int>> s1;
	stack<int, std::vector<int>> s2;
	std::stack<int> s3; // std::deque �� ���

	s1.push(10);
	s2.push(20);
	
	std::cout << s1.top() << std::endl;
}

#endif