#ifndef DEBUG

#include <iostream>

// ���� : 30~31page


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
		current = current->next;// ����
		return *this;
	}
	// find �� �����Ϸ��� "++","*" �Ӹ� �ƴ϶� == �� != �� �־���մϴ�.
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

//slist_itertator<int> p(500����);
// ++p;  // �������� �̵�
// int n = *p; // ��Ҿ��

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	// ���� list �� ��� ��Ҹ� ��ȸ�Ϸ��� �ݺ���(iterator) �� ������ �˴ϴ�.
	// iterator : ������ ������ �ϴ� ��ü, ��� ��� ��ȯ�� ���
	slist_iterator<int> p = s.begin();
	
	// p �� ��ü���� "������ �����Ǹ� ���ؼ� ������ó�� ��밡��"�մϴ�
	// -> �������ʹ� p �� ������ó�� ����ϸ� �˴ϴ�. 
	++p;
	std::cout << *p << std::endl;
	++p;
	std::cout << *p << std::endl;

	// �ǹ� : linked list �� ��� ��Ұ� ������ �������� 
	// �迭ó�� ++, *�� ��� ��ҿ� ���ٰ���

}

#endif