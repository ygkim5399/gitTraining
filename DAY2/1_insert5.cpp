#include <iostream>
#include <list>
#include <vector>
#include <iterator>

template<typename T>
class myback_insert_iterator
{
	T* container;
public:
	using iterator_category = std::output_iterator_tag;
	using value_type = void;
	using pointer = void;
	using reference = void;
	using difference_type = void;

	using container_type = T;

	myback_insert_iterator(T& c) : container(&c) {}

	myback_insert_iterator& operator*() { return *this; }

	myback_insert_iterator& operator=(const typename T::value_type& e)
	{
		container->push_back(e);
		return *this;
	}

	// ���Թݺ��ڴ� ++���� �ؾ��� ���� �����ϴ�.
	// ������, ��� �ݺ��ڴ� ++ �� �����ؾ� �Ѵٴ� ��Ģ�� �����Ƿ�
	// �Ʒ�ó�� �ƹ��ϵ� ���� �ʴ� ++�� ����..
	myback_insert_iterator& operator++()    { return *this; }
	myback_insert_iterator& operator++(int) { return *this; }
};

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int> s = { 0, 0, 0, 0, 0 };

	myback_insert_iterator< std::list<int> > bi(s);

//	*bi = 30; // s.push_back(30)
	// bi.operator*().operator=(30)
	// (�ᱹ bi ).operator=(30)
//	++bi; // ��� �ݺ��ڴ� ++�� �Ǿ�� �մϴ�.
		  // �׷���, std::copy �� ������ �ֽ��ϴ�.

	std::copy(v.begin(), v.end(), bi);

	for (auto n : s)
		std::cout << n << ", ";
}
