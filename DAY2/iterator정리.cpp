// iterator정리

// 1. 반복자 개념
// => ++로 이동 가능하고, *로 요소 접근 가능한 모든 것

// 2. 반복자의 형태별 분류 ( 2가지 )
// (1) raw pointer
// (2) 클래스로 만든것 ( ++, * 를 연산자 재정의 한것)
//     => 1일차 slist_iterator 참고.

// 3. 반복자의 종류
// (1) 컨테이너에서 꺼낼수 있다. ( s.begin(), s.end())
// (2) 독립적으로 만들어서 사용하는 반복자
//     => 삽입반복자, 스트림 반복자

// 4. 컨테이너에서 꺼내는 반복자의 4가지 종류
// => c.begin()
// => c.rbegin()
// => c.cbegin()
// => c.crbegin()

// 5. past end iterator
// => s.end() 는 끝이 아닌 끝 다음을 가리킨다.

// 6. iterator category
// => 반복자가 어떤 연산을 할수 있는가에 따른 5개(C++17 부터 6개)분류
// => input iterator
// => output iterator
// => forward iterator
// => bidirectional iterator
// => random access iterator => 연속된 메모리와 유사!
// => contiguous iterator => 연속된 메모리의 반복자

// 7. 컨테이너가 저장하는 요소 타입 꺼내기, 반복자가 가리키는 타입꺼내기
// => typename C::value_type
// => typename ITER::value_type  
// => typename std::iterator_traits<ITER>::value_type  

// 8. 삽입반복자 개념, 삽입반복자의 종류 3개

// 9. 스트림 반복자 개념, show() 함수 만들기..

// 10. 클래스 템플릿을 직접 사용하면 복잡하다!!!
//     함수 템플릿을 사용하자
// std::make_reverse_iterator<std::list<int>::iterator> p(s.begin());
// auto p = std::make_reverse_iterator(s.begin());

// 11. 반복자꺼낼때, "auto" 사용하지만, 타입도 알아 두세요
auto p = s.begin();
std::list<int>::iterator p = s.begin();
