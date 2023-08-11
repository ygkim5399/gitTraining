#ifndef DAY4

#include <iostream>
#include "show.h"

#include <set> // Red Black Tree�� ���� (�������� tree)

// set �� ���� ������ ������ ���ô�.
// -> "��������" �������� �����ϸ鼭 �ڵ带 ������
/*
template<typename T, // ������ Ÿ��
		typename Pr = std::less<T>,				//����� �񱳿� ����� �Լ���ü
		typename Alloc = std::allocator<T>>		// �޸� �Ҵ��
class set {
	Alloc	ax;		// �޸� �Ҵ� ���� - �ݵ�� allocate, deallocate �� �־�� �Ѵ�.
	Pr		cmp;	// ��� �񱳿� ����� �Լ���ü, �ݵ�� "operator()(T, T)" �� �־���Ѵ�.
	T		root;
public:
	std::pair<iterator, bool> insert(const T& newelem) {
		//if (root < newelem) // �̷��� ���� < �ߴٸ� ����ڰ� ����å�� ��ü�� �� �����ϴ�.
		if (cmp(root, newelem)) {
			add right_child;
		}
		else if (cmp(newelem, root)) {
			add left_child;
		}
		else {
			// fail; // �̹� ��Ұ� �ִٴ� �ǹ�
		}
	}

};
*/

struct MyCompare {
	inline bool operator()(int a, int b) const {
		return abs(a) < abs(b);
	}
};
int main()
{
	// �ٽ� 1. �� ��å�� ����
	//std::set<int, std::greater<int>, MyCompare> s; // abs(a) < abs(b)
	std::set<int, std::greater<int>> s; // a>b
	s.insert(20);
	s.insert(-30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	
	show(s);


	// �Ʒ� �ڵ带 ���غ�����
	auto ret1 = std::find(s.begin(), s.end(), 30);


	// �ٽ� 2. c++ �ʺ��ڰ� �򰥷� �ϴ°�
	// std::less<int>	: Ÿ���Դϴ�. (int ����)
	// std::less<int>()	: �ӽð�ü ���� (��, Ÿ���� �ƴ� ��ü(����))

	// std::sort(v.begin(), v.end(), std::less<int>());	// �Լ� ���ڴ� ��ü����
	// std::set<int, std::less<int> > s2;					// ���ø� ���ڴ� Ÿ���� ����

}







#endif