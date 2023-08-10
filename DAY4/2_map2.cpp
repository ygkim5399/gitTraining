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

	std::map<std::string, std::list<int>> index_map; // 핵심.. 구조 생각해보세요
}


