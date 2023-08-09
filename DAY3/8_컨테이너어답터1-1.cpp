#include <iostream>

// list �� �̹� �ֽ��ϴ�
#include <list>
#include <vector>
#include <deque>

template<typename T>
class stack 
{
	std::list<T> c;
public:
	void push(const T& a)	{ c.push_back(a); }
	void pop()				{ c.pop_back(); }
	T& top()				{ return c.back(); }
};

int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;	
}

