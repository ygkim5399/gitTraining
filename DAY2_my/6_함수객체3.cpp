#ifndef DAY2

#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;


bool foo(int a) {
	return a % 3 == 0;
}

class IsDivide {
	int value;
public:
	IsDivide(int n) : value(n) {}

	bool operator()(int n) {
		return n % value == 0;
	}
};

int main()
{
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// �־��� �������� k����� ã�� �ʹ�
	
	int k = 3;
	IsDivide f(k); // f�� ���������� k ���� �����ϰ� �˴ϴ�.

	bool b = f(10); // 10 % k �Դϴ�. 
					// ��, f�� �����Լ�(��ü) �̸鼭 ���������δ� 
					// main �Լ��� �������� k ���� ĸ���ؼ� �����ϰ� �ֽ��ϴ�. 

	auto p21 = std::find_if(v.begin(), v.end(), f);


	return 0;
}

// �Ϲ��Լ��� "Ŭ����" �� �� �� ������
// �Լ���ü�� "Ŭ����"�� �� �� �ֽ��ϴ�. 

















//
#endif