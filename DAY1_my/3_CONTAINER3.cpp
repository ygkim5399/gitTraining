#ifndef DEBUG

#include <iostream>



template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

// slist �ȿ� �ִ� ��Ҹ� ����Ű�� "������ ������ ��ü"�� �����ô�.
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
	// ��� �����̳ʴ� �ڽ��� �����ϴ� ����� 
	// ó���� ������ ������ ����Ű�� �ݺ��ڸ� ������ �ִ� �Լ��� �����ؾ� �մϴ�.
	slist_iterator<T> begin() { return slist_iterator<T>(head); }
	slist_iterator<T> end() { return slist_iterator<T>(nullptr); }
};


// STL_ALGORTITHM6���� find ����

/*
�ݺ��� (slist_iterator) ���п� find�� �迭 �� �ƴ϶� slist ������ �����˻��� �����մϴ�.

��, find �� 
�迭 �� �ƴ϶� ���� �ڷᱸ������ �����˻��� ���������ϴ�.

������ �Ϲ�ȭ!!! �Դϴ�. 

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

	// s.begin() : s�� 1��° ��Ҹ� ����Ű�� �ݺ��� ��ȯ
	// �����Ͱ� �ƴ� ��ü���� ������ó�� ��밡��
	slist_iterator<int> ret = find(s.begin(), s.end(), 30);
	std::cout << *s.begin() << std::endl;
}

#endif