#ifndef DAY4

#include <iostream>

// ����Ʈ �����ʹ� ���� ���縦 �ذ��ؾ� �մϴ�. 
// -> ��κ� reference counting ����� ����մϴ�. 

template <typename T>
class Ptr
{
	T* obj;
	int* ref;	// �� �̷��� �ؾ��ϳ���?
				// static int ref; �̷��� �ϸ� �ȵǳ���?? -> �ȵ˴ϴ�.

				// Ptr<int> p1 = new int;
				// Ptr<int> p2 = p1; // p1�� p2�� ���� ��� ����

				// Ptr<int> p3 = new int;
				// Ptr<int> p4 = p3; // p3�� p4�� ���� ��� ����
									// ��, �� p1, p2 �ʹ� �ٸ� ���� ���

				// �׷��� static ������ �ϸ�, ��� Ptr ��ü�� �����մϴ�. 
				// ��������� ���� �ø� �� �ۿ� �����ϴ�. 

public:
	Ptr(T* p = 0) : obj(p) {
		ref = new int;
		*ref = 1;
	}
	// �������� (reference counting) ����� ����ϴ�
	// ���� ������
	Ptr(const Ptr& p) : obj(p.obj), ref(p.ref) {
		++(*ref);
	}
	~Ptr() { 
		if (--(*ref) == 0) {
			delete obj; // �ڿ� ����
			delete ref; // ������� ������ ������ ����
		}
	}
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};

int main()
{
	Ptr<int> p1 = new int; // int* p1 = new int
	*p1 = 20;

	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; // �� ������ ������ �ذ��ؾ�
					// ����� ���� ����Ʈ ������ �Դϴ�. 

	Ptr<int> p2 = p1; // p1�� p2 �� ���� �ּҸ� ����Ű�� �ִ�. -> p2 �� ���ŵ� ��, �ּ� delete, ���� p1�� ���ŵ� �� ������ �ּҰ� ����....
					//	-> �����Ҷ����� count �Ѵ�.

}


#endif