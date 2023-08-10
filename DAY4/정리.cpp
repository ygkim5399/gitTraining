// 정리
// C++98 STL
// => 자료구조와 알고리즘 위주의 라이브러리
// => Container Iterator Algorithm

// C++11 
// => 일부 자료구조와 알고리즘 추가 : std::array, std::unordered_xxx
// => 다양한 유틸리티성 클래스 추가
//    스마트포인터, thread, chrono, random, 

// C++14/17 : 몇가지 유틸리티성 클래스 추가.
//			  boost 에 있는 요소들..
//----------------------------------------
// C++20/23 : std::ranges::알고리즘들..
//            view 들.. 
// 
// C++26 : 네트워크 라이브러리, reflection

//----------------------------
// vector 에 앞에 넣으려면 push_front() 사용한다 - X

// 다음중 반복자의 종류(카테고리)가 다른것은 ?
// list, deque, vector, string

// data 를 힙이 아닌 stack 에 보관할수 있는 sequence container는 ?
// => std::array

// key-value 로 저장하는 hash 기반의 컨테이너는 ?
// => std::unordered_map