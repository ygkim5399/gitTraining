#ifndef DAY3


#include <iostream>

// list 가 이미 있습니다
#include <list>
#include <vector>
#include <deque>

// 그런데, 스택이 필요합니다.
// 1. 새로 만들자.
// 2. list를 스택처럼 보이게 하자.


// adaper 패턴 : 기존 클래스의 인터페이스 (함수이름)을 변경해서
//				다른 클래스처럼 보이게 하는 디자인 패턴

// list 의 함수이름을 변경해서 stack 처럼 보이도록 해 봅시다. 

template<typename T>
class stack : public std::list<T> {
public:
	void push(const T& a)	{ std::list<T>::push_back(a); }
	void pop(const T& a)	{ std::list<T>::pop_back(); }
	T& top()				{ return std::list<T>::back(); }
};


int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;
	
	//s.push_front(30);	// 사용자가 실수했다..
						// stack 이 잘못된 상태가 된다. 
						// -> stack 을 상속받으면 안된다.

}
// java 는 스택이 위 코드와 유사하게 "vector" 로부터 상속으로 만들었습니다.
// -> 잘못된 디자인의 대표적인 예!

#endif