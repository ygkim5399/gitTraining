#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>

// ���� : ������ �������� ���� "ã�ƺ���" �� �ֽ��ϴ�.
//        ����� ���ô�.
//        "���Ͽ��� Ư�� �ܾ ���° �ٿ� �ִ���"

int main()
{
	std::ifstream f("2_map2.cpp");

	int no = 0;
	std::string s;
	std::string word;

	std::map< std::string, std::list<int> > index_map; // �ٽ�.. ���� �����غ�����

	while (std::getline(f, s)) // ���Ͽ��� ���� �б�
	{
		++no; // line number ����

		std::istringstream iss(s);

		while (iss >> word)	// ����(����)�� �ܾ�� �и�
		{
			// [] ���� : word �� �̹� ������ value(list) ��ȯ
			//			 ������ ���Ӱ� ����
			index_map[word].push_back(no);
		}
	}
}




