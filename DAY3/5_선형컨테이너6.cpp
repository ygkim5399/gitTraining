#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// ����,
// std::cin >> s;            // �ܾ� �Է�. "AA BB" �� ������ "AA" �� �Է�
// std::getline(std::cin, s);// ���� �Է�. "AA BB" => "AA BB" �Է�

int main()
{
	std::vector<std::string> v;
	std::ifstream f("5_���������̳�6.cpp"); // ���� �����̸�

	std::string s;

	while (std::getline(f, s))
		v.push_back(s);
	//----------------------------



	//-------------------------------------
	for (auto& n : v)
		std::cout << n << std::endl;
}


