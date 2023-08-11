#ifndef DEBUG

// insert2.cpp
#include <iostream>
#include <algorithm>
#include <list>

#include <iterator>

#include <vector>

// �Լ� ����

int main(int argc, char** argv)
{
	int x[5] = { 10,20,30,40,50 };

	std::list<int> s1 = { 0,0,0,0,0 };
	std::list<int> s2 = { 0,0,0,0,0 };
	std::vector<int> v = { 1,2,3,4,5 };

	//v �� ��� ��Ҹ� list �� �߰��ϰ� �ʹ�.

	// ���1. push_back ���
	//for (auto e : v)
	//	s1.push_back(e);

	// ���2. ���Թݺ��ڿ� std::copy ���
	//std::back_insert_iterator<std::list<int>> bi(s2);
	//std::copy(v.begin(), v.end(), bi);


	// std::copy ���ô� �Ʒ�ó�� "���Թݺ��ڸ� ����� �Լ��� ����ϸ� ���մϴ�.
	std::copy(v.begin(), v.end(), std::back_inserter(s2));
	//std::copy(x, x + 5, s.begin()); // �����.
	for (auto e : s2)
		std::cout << e << " , ";

	//for (auto& n : s)
	//	std::cout << n << std::endl; 
}

#endif
#include <algorithm>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
#include <list>

using namespace std;

int main() {


	std::stack< int, std::vector<int>> s1;
	std::stack< int, std::list<int>> s2;
	std::queue< int, std::vector<int>> s3;
	std::queue< int, std::list<int>> s4;

}