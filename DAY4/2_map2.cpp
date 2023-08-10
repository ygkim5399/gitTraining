#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>

// 예제 : 도서의 마지막에 보면 "찾아보기" 가 있습니다.
//        만들어 봅시다.
//        "파일에서 특정 단어가 몇번째 줄에 있는지"

int main()
{
	std::ifstream f("2_map2.cpp");

	int no = 0;
	std::string s;
	std::string word;

	std::map< std::string, std::list<int> > index_map; // 핵심.. 구조 생각해보세요

	while (std::getline(f, s)) // 파일에서 한줄 읽기
	{
		++no; // line number 증가

		std::istringstream iss(s);

		while (iss >> word)	// 한줄(문장)을 단어로 분리
		{
			// [] 연산 : word 가 이미 있으면 value(list) 반환
			//			 없으면 새롭게 생성
			index_map[word].push_back(no);
		}
	}
}




