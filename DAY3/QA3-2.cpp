#include <iostream>

// int* �Ѱ��� �����ϰ�, ++, * �� �����ϴ� Ŭ����
class iterator
{
	int* current;
public:
	iterator(int* p = nullptr) : current(p) {}

	iterator& operator++() { ++current; return *this; }
	int& operator*() { return *current; }
};
// => int* p1 = 100����
// => iterator p2(100����)
// => ++p1, *p1;
// => ++p2, *p2;
// => �ᱹ �� 2���� ���ٴ� ���ε�.. �׳� ������ ������� ��..???
//    iterator �� ��������� ?

// �Ʒ� �ڵ��� main �� �ٽ� �Դϴ�.

//------------------------------------------------------------
int x[10] = { 1,2,3,4,5,6,7,8,9, 10 };

int* begin1() { return x; }

iterator begin2() { return iterator(x); }

int main()
{
	
	// ���� �ּҴ� rvalue �Դϴ�. rvalue�� ++ �ɼ� �����ϴ�.
	// => ++3 �� �ȵǴ� �Ͱ� ���� ����
	// => ��, ������ "����"�� ++�˴ϴ�.

	// �ӽð�ü�� rvalue �Դϴ�.
	// => �׷���, rvalue �� ��� �Լ��� ȣ��˴ϴ�.
//	auto p1 = ++begin1(); // error. ++(100����)
	
	auto p2 = ++begin2(); // ok.    ++(�ӽð�ü) => �ӽð�ü.operator++()

	// �� p1 �ڵ� �ǰ� �Ϸ��� �Ʒ� ó�� �ϸ� �˴ϴ�
	auto p1 = std::next(begin1(), 1);

	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl; // 2

//	std::vector<int> v = { 1,2,3,4,5 };

//	auto p3 = ++v.begin(); // vector �� �ݺ��ڸ� ��¥ �����ͷ� �ߴٸ�
							// ���ڵ�� ���� �Դϴ�.
							// ������ ���� STL ������ ������ �ƴմϴ�.
}
// cppreference.com ���� std::next �˻� �� ������