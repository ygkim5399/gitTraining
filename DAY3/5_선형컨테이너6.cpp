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

	while (std::getline(f, s)) // ���Ͽ��� "�� ����" �б�
		v.push_back(s);
	//----------------------------

//	std::reverse( v.begin(), v.end() ); // ���� ���Ϸ� ������
//	std::reverse( v[0].begin(), v[0].end()); // 1��° ���� �¿� ������
	
	for (auto& e : v)
	{
	//	std::reverse(e.begin(), e.end());

		// i ���ڸ� �������� ġȯ
		std::replace(e.begin(), e.end(), 'i', ' ');
	}


	//-------------------------------------
	for (auto& n : v)  // n �� �ᱹ std::string
		std::cout << n << std::endl;
}


