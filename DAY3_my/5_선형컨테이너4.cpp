#ifndef DAY3

#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// ������ ����� ���� �Լ�
// -> ���ڷ� "�迭�� �ּ�"�� "ũ��"�� �ް� �ֽ��ϴ�.

void foo(int* arr, int sz) {}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10);

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// �߸��� index �� ����߽��ϴ�.
	// 1. ���� �߻��� ���̴�. throw..
	// 2. ������ ����� ���̴�. 
	//v[10] = 0; // 2. ������ ����. �߸��� index Ȯ�� ����
	//v.at(10) = 0; // 1. ���� �߻�

	try {
		v[10] = 0;  
		v.at(10) = 0;
	}
	catch (std::out_of_range & e) {
		std::cout << "exfception : " << e.what() << std::endl;
	}
	std::cout << "main continue " << std::endl;




	for (int i = 0; i < v.size(); i++) {
		// ������ ���� �ڵ��?
		// -> �ٽ��� i�� �߸����� �ʾҴٴ� ��
		v[i] = 0; // 1. ���� �ڵ�!! exception ������ ����. ��������
		v.at(i) = 0; // 2. exception ���� 
	}

	// foo �� v�� ���� ������.
	//foo(v, v.size()); // error
	//foo(&v, v.size()); // error. v�� �ּ�����, 10�� ������ �ּҴ� �ƴ�

	foo(&v[0], v.size()); // ok.. c++11 ������ ����ϴ� �ڵ�
	foo(v.data(), v.size()); // ok
	
}



#endif