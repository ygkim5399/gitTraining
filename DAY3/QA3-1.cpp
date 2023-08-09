#include <vector>
#include <list>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// .begin() 으로 꺼내는 반복자는	
	// => 클래스 형태로 만들어진 반복자 입니다.
	// => raw pointer 와 유사하게 사용가능하지만 raw pointer 는 아닙니다.
	auto p = s.begin();
	++p; // p.operator++()

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p1 = v.begin();
	auto p2 = v.data();
}



// github.com/codenuri/sstl 

// DAY3 폴더에서 "QA3-1, QA3-2" 받아 두세요