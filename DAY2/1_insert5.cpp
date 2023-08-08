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

	// 삽입반복자는 ++에서 해야할 일은 없습니다.
	// 하지만, 모든 반복자는 ++ 을 지원해야 한다는 규칙이 있으므로
	// 아래처럼 아무일도 하지 않는 ++을 제공..
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
	// (결국 bi ).operator=(30)
//	++bi; // 모든 반복자는 ++이 되어야 합니다.
		  // 그래야, std::copy 에 보낼수 있습니다.

	std::copy(v.begin(), v.end(), bi);

	for (auto n : s)
		std::cout << n << ", ";
}
