#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// 참고,
// std::cin >> s;            // 단어 입력. "AA BB" 로 했을때 "AA" 만 입력
// std::getline(std::cin, s);// 문장 입력. "AA BB" => "AA BB" 입력

int main()
{
	std::vector<std::string> v;
	std::ifstream f("5_선형컨테이너6.cpp"); // 현재 파일이름

	std::string s;

	while (std::getline(f, s)) // 파일에서 "한 문장" 읽기
		v.push_back(s);
	//----------------------------

//	std::reverse( v.begin(), v.end() ); // 파일 상하로 뒤집기
//	std::reverse( v[0].begin(), v[0].end()); // 1번째 줄을 좌우 뒤집기
	
	for (auto& e : v)
	{
	//	std::reverse(e.begin(), e.end());

		// i 글자를 공백으로 치환
		std::replace(e.begin(), e.end(), 'i', ' ');
	}


	//-------------------------------------
	for (auto& n : v)  // n 은 결국 std::string
		std::cout << n << std::endl;
}


