#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <unordered_map>
#include <algorithm>
#include "show.h"
// 예제 : 도서의 마지막에 보면 "찾아보기" 가 있습니다.
//        만들어 봅시다.
//        "파일에서 특정 단어가 몇번째 줄에 있는지"

int main()
{
	std::ifstream f("4_unordered_map2.cpp");

	int no = 0;
	std::string s;
	std::string word;

//	std::map< std::string, std::list<int> > index_map; 
	std::unordered_map< std::string, std::list<int> > index_map;


	while (std::getline(f, s)) 
	{
		++no; 
		std::istringstream iss(s);

		while (iss >> word)	
		{
			index_map[word].push_back(no);
		}
	}
	//--------------------------------
	for (const auto& e : index_map)
	{
		std::cout << e.first << " : ";

		show(e.second);

	}
}




