#ifndef DEBUG

#include <iostream>

// 교재 : 30~31page


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
		current = current->next;// 구현
		return *this;
	}
	// find 에 전달하려면 "++","*" 뿐만 아니라 == 와 != 가 있어야합니다.
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
	// 모든 컨테이너는 자신이 보관하는 요소의 
	// 처음과 마지막 다음을 가리키는 반복자를 얻을수 있는 함수를 제공해야 합니다.
	slist_iterator<T> begin() { return slist_iterator<T>(head); }
	slist_iterator<T> end() { return slist_iterator<T>(nullptr); }
};

//slist_itertator<int> p(500번지);
// ++p;  // 다음으로 이동
// int n = *p; // 요소얻기

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	// 이제 list 의 모든 요소를 순회하려면 반복자(iterator) 를 꺼내면 됩니다.
	// iterator : 포인터 역할을 하는 객체, 모든 요소 순환에 사용
	slist_iterator<int> p = s.begin();
	
	// p 는 객체지만 "연산자 재정의를 통해서 포인터처럼 사용가능"합니다
	// -> 이제부터는 p 를 포인터처럼 사용하면 됩니다. 
	++p;
	std::cout << *p << std::endl;
	++p;
	std::cout << *p << std::endl;

	// 의미 : linked list 는 모든 요소가 떨어진 구조지만 
	// 배열처럼 ++, *로 모든 요소에 접근가능

}

#endif