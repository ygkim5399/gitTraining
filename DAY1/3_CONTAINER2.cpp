#include <iostream>

// 교재 : 30 ~ 31 page

template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};


// slist 안에 있는 요소를 가리키는 "포인터 역활의 객체" 를 만들어 봅시다.
template<typename T> class slist_iterator
{

};

slist_iterator<int> p(500번지);

// p는 "포인터가 아닌 객체지만" 포인터 처럼 동작해야 합니다.
++p;		// 다음으로 이동
int n = *p; // 요소 얻기








template<typename T> class slist
{
	Node<T>* head = nullptr;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}
};
int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);
}