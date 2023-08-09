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

	while (std::getline(f, s))
		v.push_back(s);
	//----------------------------



	//-------------------------------------
	for (auto& n : v)
		std::cout << n << std::endl;
}


