// iterator1.cpp
#include <iostream>
#include <list>
using namespace std;

int main()
{
	int x[5] = { 1,2,3,4,5 };

	int* p = x;
	*p; 
	++p;


	std::list<int> s = { 1,2,3,4,5 };

	// STL �� ��� �����̳ʴ� "�ݺ���(iterator)" �� ����ϸ�
	// ��� �����ϰ�(������ ó��) ��� ��ҿ� �����Ҽ� �ֽ��ϴ�.

	std::list<int>::iterator p2 = s.begin();
	*p2;  // p2.operator*()
	++p2; // p2.operator++()
}










