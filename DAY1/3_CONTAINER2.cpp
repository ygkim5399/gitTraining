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

};

slist_iterator<int> p(500����);

// p�� "�����Ͱ� �ƴ� ��ü����" ������ ó�� �����ؾ� �մϴ�.
++p;		// �������� �̵�
int n = *p; // ��� ���








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