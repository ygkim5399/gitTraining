#ifndef DAY4

#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <list>
#include <map>
#include <algorithm>
#include "show.h"
int main()
{
	std::unordered_map<std::string, std::string> m;
	std::ifstream f("4_unordered_map2.cpp");

	int no = 0;
	std::string s;
	std::string word;

	//std::map<std::string, std::list<int>> index_map; 
	std::unordered_map<std::string, std::list<int>> index_map; 

	while (std::getline(f, s)) 
	{
		++no; 
		std::istringstream iss(s);
		while (iss >> word)	
		{
			index_map[word].push_back(no);
		}
	}

	//-------------------------------


	for (const auto& e : index_map) {

		std::cout << e.first << " : ";
		show(e.second);
	}
}


#endif