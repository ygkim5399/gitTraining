#ifndef DEBUG

#include <iostream>



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
	// 모든 컨테이너는 자신이 보관하는 요소의 
	// 처음과 마지막 다음을 가리키는 반복자를 얻을수 있는 함수를 제공해야 합니다.
	slist_iterator<T> begin() { return slist_iterator<T>(head); }
	slist_iterator<T> end() { return slist_iterator<T>(nullptr); }
};


// STL_ALGORTITHM6에서 find 복사

/*
반복자 (slist_iterator) 덕분에 find는 배열 뿐 아니라 slist 에서도 선형검색이 가능합니다.

즉, find 는 
배열 뿐 아니라 몯느 자료구조에서 선형검색이 가능해집니다.

진정한 일반화!!! 입니다. 

*/
template <typename T1, typename T2>
T1 find(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
		++first;

	return first;// == last ? nullptr : first;
}


int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	// s.begin() : s의 1번째 요소를 가리키는 반복자 반환
	// 포인터가 아닌 객체지만 포인터처럼 사용가능
	slist_iterator<int> ret = find(s.begin(), s.end(), 30);
	std::cout << *s.begin() << std::endl;
}

#endif