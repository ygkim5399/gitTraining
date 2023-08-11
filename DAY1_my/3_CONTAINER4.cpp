#ifndef DEBUG

#include <iostream>

#include <list>
#include <vector>
#include <string>

template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

// slist 안에 있는 요소를 가리키는 "포인터 역할의 객체"를 만들어봅시다.
template<typename T> class slist_iterator
{
	Node<T>* current;
public:
	inline slist_iterator(Node<T>* p = nullptr) : current(p) {}
	inline slist_iterator& operator++() {
		current = current->next;
		return *this;
	}
	inline T& operator*() {
		return current->data;
	}
	inline bool operator==(const slist_iterator& it) const {
		return current == it.current;

	}
	inline bool operator!=(const slist_iterator& it) const {
		return current != it.current;
	}
};
template<typename T> class slist
{
	Node<T>* head = nullptr;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}
	// 모든 컨테이너 (list 같은 자료구조를 구현한 클래스)는 
	// 자신의 반복자 이름을 약속된 이름(iterator)으로 외부에 알려야 한다.
	using iterator = slist_iterator<T>; // typedef slist_iterator<T>;

	iterator begin() { return iterator(head); }
	iterator end()	 { return iterator(nullptr); }
};



int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	slist<int>::iterator p = s.begin();
	//slist_iterator<int> p = s.begin();

	// =========================
	// 실제 STL 의 반복자를 꺼내 봅시다.
	std::list<int> ss = { 1,2,3 };
	std::vector<int> vv = { 1,2,3 };
	std::string str = "hello";

	// ss, vv, st 의 반복자를 꺼내서 p1, p2, p3에 담아보세요
	// -> auto 사용하지 말고, 코드만들어 보세요
	// ? p1 = ss.begin();
	// ? p2 = vv.begin();
	// ? p3 = st.begin();
	std::list<int>::iterator p1		= ss.begin();
	std::vector<int>::iterator p2	= vv.begin();
	std::string::iterator p3		= str.begin();

}

#endif