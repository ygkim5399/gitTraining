#ifndef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;


// ����(unary) �Լ� : ���ڰ� 1���� �Լ�
// ����(binary) �Լ� : ���ڰ� 2���� �Լ�

int foo(int a, int b) { return a + b; }


int main()
{
	std::list<int> s1 = { 1,2,3,4,5};
	std::list<int> s2 = { 6,7,8,9,10};
	std::list<int> s3;
	/*
	// transform �˰���
	std::transform(s1.begin(), s1.end(),	// 1. �� ������ ��� ��Ҹ�
					s2.begin(),				// 2. �� ������ ��ҿ� �Բ�
					std::back_inserter(s3),	// 4. �� ���� �־�޶�
					//s3.begin(), // error (s3 �� ��������Ƿ� runtime error)
					foo);					// 5. ���Լ��� ���� �� ��ȯ����

	show(s3);
	*/
	// transform �˰��� �����Լ��� lambda ǥ�������� �غ�����

	std::transform(s1.begin(), s1.end(),	// 1. �� ������ ��� ��Ҹ�
		s2.begin(),							// 2. �� ������ ��ҿ� �Բ�
		std::back_inserter(s3),				// 4. �� ���� �־�޶�
		//s3.begin(), // error (s3 �� ��������Ƿ� runtime error)
		[](int a, int b) {return a + b; });	// 5. ���Լ��� ���� �� ��ȯ����

	return 0;
}



















//
#endif