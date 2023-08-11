#ifndef DAY3


#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// 1. ����
	std::vector<int> v1;			//  ��Ұ� ����.
	std::vector<int> v2(10);		// 10�� ��Ҹ� 0���� �ʱ�ȭ
	std::vector<int> v3(10, 3);		// 10�� ��Ҹ� 3���� �ʱ�ȭ
	std::vector<int> v5{ 10, 3 };	// 2���� 10, 3���� �ʱ�ȭ
	std::vector<int> v6 = { 1,2,3 };// 3���� 1,2,3
	
	std::vector<int> v4(v3);		// v3�� ��Ҹ� ����!!


	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 2. �߰�(����) 
	//v.push_front(10); // ���� ����. ��, vector�� �ȵ�
	v.push_back(10);	// �Ĺ� ����
	//v.insert(��ġ, 20); // ��ġ(�ݺ���) �տ� 20�� ����
	v.insert(std::next(v.begin(), 3), 20);


	// 3. ����
	//v.pop_front();	// ���� ����, ��, vector �� �ȵ�
	v.pop_back();		// �Ĺ� ����

	//v.erase(�ݺ���);	// �Ѱ� ����
	//v.erase(�ݺ���1, �ݺ���2);	// [�ݺ���1 ~ �ݺ���2) ���� ����

	v.clear(); // ��� ����

	// 4. ����
	int n1 = v.front();	// ok. vector �� ����
	int n2 = v.back(); 

	int n3 = v[3];		// vector, deque �� ����, list �ȵ�.
	int n4 = v.at(3);	// vector, deque �� ����, list �ȵ�.
						// [] �� �������� �ڿ���

	// list �� ���� ������ "�ݺ��ڸ� ������ �մϴ�"
	// auto p = list.begin();
	// std::advance(p, 4);


	// 5. ��� ����
	std::list<int> s = { 1,2,3 };
	v.assign(s.begin(), s.end());	// v�� s.begin(), s.end() �� ��ҷ� ��ü



	// �������� ����Լ��� ���� �� �����ϴ�? 
	// -> �˰����� �����Ƿ�!
	// -> sort �ϰ� ������ std::sort(v.begin(), v.end());
}	// -> ������ ������    std::reverse(v.begin(), v.end());

#endif