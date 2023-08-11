
#ifdef DEBUG

#include <iostream>
#include <iterator>
#include <list>
#include <fstream>
#include <vector>

// 1. container ����
// -> ragne-for �� ����ϴ� ���� ���� �����ϴ�.
template<typename C>
void show(const C& c) {
	for (auto e : c)
		std::cout << e << ", ";
	std::cout << std::endl;
}

// 2. iterator ����

template <typename T>
void show(T first, T last) {
	// �Ʒ� �ڵ�� T �� ��ü�� �ݺ����϶��� �����ϰ�
	// raw pointer �϶��� �ȵ˴ϴ�. 
	//std::ostream_iterator<typename T::value_type> p(std::cout, ", ");
	
	// �Ʒ�ó���ϸ� T �� raw_pointer �϶��� ����
	// -> ���� ���� �ڵ� 
	std::ostream_iterator<typename std::iterator_traits<T>::value_type> p(std::cout, ", ");

	std::copy(first, last, p);
	std::cout << std::endl;
}

//#include "show.h" // �� 2�� �Լ��� �� ����� �ֽ��ϴ�. 
//				// �̽ð� ���ĺ��ʹ� �� ��� ����ϰڽ��ϴ�.

int main() {

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// �����̳��� ����Ҹ� ȭ�� ����� ���� ���� �ֽ��ϴ�.
	// �Ʒ� �Լ��� ����� ���ô�..
	show(v);
	show(x);
	
	show(x, x + 5);
	show(v.begin(), std::next(v.begin(), 5));
					// v.begin() + 5 �� ���� (�������� �̹Ƿ�)
					// v �� list ��� std::next() �ʿ�
}

#endif