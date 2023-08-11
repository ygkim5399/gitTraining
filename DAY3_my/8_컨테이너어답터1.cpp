#ifndef DAY3


#include <iostream>

// list �� �̹� �ֽ��ϴ�
#include <list>
#include <vector>
#include <deque>

// �׷���, ������ �ʿ��մϴ�.
// 1. ���� ������.
// 2. list�� ����ó�� ���̰� ����.


// adaper ���� : ���� Ŭ������ �������̽� (�Լ��̸�)�� �����ؼ�
//				�ٸ� Ŭ����ó�� ���̰� �ϴ� ������ ����

// list �� �Լ��̸��� �����ؼ� stack ó�� ���̵��� �� ���ô�. 

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
	
	//s.push_front(30);	// ����ڰ� �Ǽ��ߴ�..
						// stack �� �߸��� ���°� �ȴ�. 
						// -> stack �� ��ӹ����� �ȵȴ�.

}
// java �� ������ �� �ڵ�� �����ϰ� "vector" �κ��� ������� ��������ϴ�.
// -> �߸��� �������� ��ǥ���� ��!

#endif