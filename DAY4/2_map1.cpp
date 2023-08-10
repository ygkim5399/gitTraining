#include <map>  
#include "show.h"

// map : pair 를 저장하는 set,   key(pair.first) 값으로 value(pair.second) 를 저장


int main()
{
	std::map<std::string, std::string> m;
			// set<pair<string, string>> 의 의미에..
			// 사용하기 쉽도록 [] 등의 기능을 더 추가한것.. 

	// 요소 넣기
	// 1. pair 만들어서 넣기
	std::pair<std::string, std::string> p1("mon", "월요일");

	m.insert(p1);

	// 2. make_pair
	m.insert( std::make_pair("tue", "화요일") );


	// 3. [] 연산자 사용
	m["wed"] = "수요일"; // 가장 널리 사용


	// 위 코드를 보면 마치 "영한사전" 처럼 보입니다.
	// 그래서, 다른 언어에서는 map 을 "dictionary" 라고도 합니다.

	// string 의 크기 비교는 "lexicographical compare" 입니다.
	// "사전식 크기 비교"

	// 핵심 : map 의 요소는 pair 이다.!!

	//------------------------
	
	// 반복자에 대해서
	auto p = m.find("wed"); // find(키값)

	// p를 사용해서 "wed : 수요일" 이라고 출력해보세요






	// [] 연산자
	std::cout << m["sun"] << std::endl; 
}




