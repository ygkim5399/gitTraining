#include <iostream>

// list 가 이미 있습니다
#include <list>
#include <vector>
#include <deque>

template<typename T, typename C = std::deque<T> >
class stack 
{
	C c;
public:
	inline void push(const T& a)	{ c.push_back(a); }
	inline void pop()				{ c.pop_back(); }
	inline T& top()				{ return c.back(); }
};

int main()
{
	stack<int, std::list<int> >   s1;
	stack<int, std::vector<int> > s2;

	stack<int> s3; // std::deque 사용

	s1.push(10);
	s1.push(20);

	std::cout << s1.top() << std::endl;	
}

