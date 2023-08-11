#ifndef DAY3

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



	// begin() vs data() 차이점
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p1 = v.begin();// v가 첫번째 요소를 가리키는 반복자
						// 타입은 int*가 아닌 
						// vertor_iterator 등의 내부 이름 사용
						
	auto p2 = v.data();	// v가 내부적으로 사용하는 버퍼의 주소
						// 결국 int*
						// 결국 &v[0]
}



// github.com/codenuri/sstl 

// DAY3 폴더에서 "QA3-1, QA3-2" 받아 두세요

#endif