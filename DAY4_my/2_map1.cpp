#ifndef DAY4

#include <map>  
#include "show.h"
// map : pair 를 저장하는 set,   key(pair.first) 값으로 value(pair.second) 를 저장

int main()
{
	std::map<std::string, std::string> m;
			// pair<string, string> 을 저장하는 set 의 의미 (내부적으로 변환)


	// 요소 넣기
	// 1. pair 만들어서 넣기
	std::pair<std::string, std::string> p1("mon", "월요일");
	//		set<pair<string, string>> 의 의미에
	//		사용하기 쉽도록 [] 등의 기능을 추가한 것
	
	m.insert(p1);

	// 2. make_pair
	m.insert(std::make_pair("tue", "화요일"));

	// 3. emplace



	// 4. [] 연산자 사용
	m["wed"] = "수요일";

	//위 코드를 보면 마치 "영한사전"처럼 보입니다.
	// 그래서 다른 언어에서는 map 을 dictionary 라고도 합니다.

	// string 의 크기 비교는 "lexicographical compare" 입니다.
	// 사전식 크기 비교

	// 핵심 : map 의 요소는 pair 다
	//------------------------
	
	// 반복자에 대해서
	auto p = m.find("wed"); // find(키값)

	// p를 사용해서 "wed : 수요일" 이라고 출력해보세요
	// 1. p는 map의 반복자 
	// 2. 반복자는 요소를 가리키는 포인터 역할
	// 3. map 의 요소는 pair!!
	// 4. 따라서, p는 pair의 포인터처럼 사용가능
	// 
	std::cout << p->first << " : " << p->second << std::endl;
	std::cout << (*p).first << std::endl;
	

	// [] 연산자
	// 현재 m 에는 "sun" 키값이 없습니다. 
	std::cout << m["sun"] << std::endl; // 1. sun 키값이 없으므로 예외발생
										// 2. ("sun", "") 로 새롭게 데이터 추가
										// -> 2번 입니다.
	// 따라서, map 에는 특정 키값이 있는지 조사할 때는 [] 연산 사용하지 마세요
	// find로 찾으세요
	auto ret = m.find("sat");
	if (ret == m.end()) {
		// "sat" 없음..
	}

	m.
	// c++20부터는 contain 멤버함수가 추가되었습니다. 
	//if (m.contains("sat")) {} //
}




#endif