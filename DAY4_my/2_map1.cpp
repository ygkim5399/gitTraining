#ifndef DAY4

#include <map>  
#include "show.h"
// map : pair �� �����ϴ� set,   key(pair.first) ������ value(pair.second) �� ����

int main()
{
	std::map<std::string, std::string> m;
			// pair<string, string> �� �����ϴ� set �� �ǹ� (���������� ��ȯ)


	// ��� �ֱ�
	// 1. pair ���� �ֱ�
	std::pair<std::string, std::string> p1("mon", "������");
	//		set<pair<string, string>> �� �ǹ̿�
	//		����ϱ� ������ [] ���� ����� �߰��� ��
	
	m.insert(p1);

	// 2. make_pair
	m.insert(std::make_pair("tue", "ȭ����"));

	// 3. emplace



	// 4. [] ������ ���
	m["wed"] = "������";

	//�� �ڵ带 ���� ��ġ "���ѻ���"ó�� ���Դϴ�.
	// �׷��� �ٸ� ������ map �� dictionary ��� �մϴ�.

	// string �� ũ�� �񱳴� "lexicographical compare" �Դϴ�.
	// ������ ũ�� ��

	// �ٽ� : map �� ��Ҵ� pair ��
	//------------------------
	
	// �ݺ��ڿ� ���ؼ�
	auto p = m.find("wed"); // find(Ű��)

	// p�� ����ؼ� "wed : ������" �̶�� ����غ�����
	// 1. p�� map�� �ݺ��� 
	// 2. �ݺ��ڴ� ��Ҹ� ����Ű�� ������ ����
	// 3. map �� ��Ҵ� pair!!
	// 4. ����, p�� pair�� ������ó�� ��밡��
	// 
	std::cout << p->first << " : " << p->second << std::endl;
	std::cout << (*p).first << std::endl;
	

	// [] ������
	// ���� m ���� "sun" Ű���� �����ϴ�. 
	std::cout << m["sun"] << std::endl; // 1. sun Ű���� �����Ƿ� ���ܹ߻�
										// 2. ("sun", "") �� ���Ӱ� ������ �߰�
										// -> 2�� �Դϴ�.
	// ����, map ���� Ư�� Ű���� �ִ��� ������ ���� [] ���� ������� ������
	// find�� ã������
	auto ret = m.find("sat");
	if (ret == m.end()) {
		// "sat" ����..
	}

	m.
	// c++20���ʹ� contain ����Լ��� �߰��Ǿ����ϴ�. 
	//if (m.contains("sat")) {} //
}




#endif