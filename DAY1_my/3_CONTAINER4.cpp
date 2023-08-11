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
	// ��� �����̳� (list ���� �ڷᱸ���� ������ Ŭ����)�� 
	// �ڽ��� �ݺ��� �̸��� ��ӵ� �̸�(iterator)���� �ܺο� �˷��� �Ѵ�.
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
	// ���� STL �� �ݺ��ڸ� ���� ���ô�.
	std::list<int> ss = { 1,2,3 };
	std::vector<int> vv = { 1,2,3 };
	std::string str = "hello";

	// ss, vv, st �� �ݺ��ڸ� ������ p1, p2, p3�� ��ƺ�����
	// -> auto ������� ����, �ڵ常��� ������
	// ? p1 = ss.begin();
	// ? p2 = vv.begin();
	// ? p3 = st.begin();
	std::list<int>::iterator p1		= ss.begin();
	std::vector<int>::iterator p2	= vv.begin();
	std::string::iterator p3		= str.begin();

}

#endif