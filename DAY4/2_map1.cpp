#include <map>  
#include "show.h"

// map : pair �� �����ϴ� set,   key(pair.first) ������ value(pair.second) �� ����


int main()
{
	std::map<std::string, std::string> m;
			// set<pair<string, string>> �� �ǹ̿�..
			// ����ϱ� ������ [] ���� ����� �� �߰��Ѱ�.. 

	// ��� �ֱ�
	// 1. pair ���� �ֱ�
	std::pair<std::string, std::string> p1("mon", "������");

	m.insert(p1);

	// 2. make_pair
	m.insert( std::make_pair("tue", "ȭ����") );


	// 3. [] ������ ���
	m["wed"] = "������"; // ���� �θ� ���


	// �� �ڵ带 ���� ��ġ "���ѻ���" ó�� ���Դϴ�.
	// �׷���, �ٸ� ������ map �� "dictionary" ��� �մϴ�.

	// string �� ũ�� �񱳴� "lexicographical compare" �Դϴ�.
	// "������ ũ�� ��"

	// �ٽ� : map �� ��Ҵ� pair �̴�.!!

	//------------------------
	
	// �ݺ��ڿ� ���ؼ�
	auto p = m.find("wed"); // find(Ű��)

	// p�� ����ؼ� "wed : ������" �̶�� ����غ�����






	// [] ������
	std::cout << m["sun"] << std::endl; 
}




