#include <iostream>
#include <list>   
#include <vector>

int main()
{
//	std::list<int> s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };
	int s[5] = { 1,2,3,4,5 };

	// 1. �ݺ����� ��Ȯ�� Ÿ��.
	// ��, ��Ȯ�� Ÿ���� ����ϴ� ���� �������� �ʽ��ϴ�
	// => �����̳� ����� �Ʒ� �ڵ嵵 ����˴ϴ�.
	// => �ڵ尡 ������ ���Դϴ�.
//	std::list<int>::iterator p1 = s.begin();

	// ���� : auto ����ϼ���..
//	auto p1 = s.begin();


	// 2. �ݺ��ڸ� ������ ��
//	auto p2 = s.begin(); // C++98 ��Ÿ�� 
						 // s�� �迭�̶�� error

	auto p2 = std::begin(s); // C++11 ���� �߰��� ���
							 // s �� raw array �� ��밡��
}



