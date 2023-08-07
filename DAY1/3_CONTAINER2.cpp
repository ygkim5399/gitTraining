#include <iostream>

// ���� : 30 ~ 31 page

template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};


// slist �ȿ� �ִ� ��Ҹ� ����Ű�� "������ ��Ȱ�� ��ü" �� ����� ���ô�.
template<typename T> class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = nullptr) : current(p) {}

	slist_iterator& operator++()
	{
		current = current->next;
		return *this;
	}
	T& operator*()
	{
		return current->data;
	}

	// find �� �����Ϸ��� "++, *" �� �ƴ϶� == �� != �� �־�� �մϴ�.
	bool operator==(const slist_iterator& it) const
	{
		return current == it.current;
	}
	bool operator!=(const slist_iterator& it) const
	{
		return current != it.current;
	}
};

/*
slist_iterator<int> p(500����);
// p�� "�����Ͱ� �ƴ� ��ü����" ������ ó�� �����ؾ� �մϴ�.
++p;		// �������� �̵�
			// p�� ��ü�̹Ƿ� "p.operator++()" �Լ��� ȣ���.
int n = *p; // ��� ���
*/







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
	slist_iterator<T> end()   { return slist_iterator<T>(nullptr); }
};

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	// ���� list �� ��� ��Ҹ� ��ȸ �Ϸ��� "�ݺ���(iterator)" �� ������ �˴ϴ�.
	// => iterator : ������ ��Ȱ�� �ϴ� ��ü. ��� ��� ��ȯ�� ���
	slist_iterator<int> p = s.begin();

	// p �� ��ü���� "������ �����Ǹ� ���ؼ� ������ ó�� ��밡��" �մϴ�.
	// => �������ʹ� p�� ������ó�� ����ϸ� �˴ϴ�.
	++p;
	std::cout << *p << std::endl; // 40

	++p;
	std::cout << *p << std::endl; // 30

	// �ǹ� : linked list �� ��� ��Ұ� ������ ��������
	//       �迭 ó�� ++, *�� ��� ��ҿ� ���� ���� �մϴ�.
}