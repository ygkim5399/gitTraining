#ifndef DAY2

#include <iostream>
#include <algorithm> 

// 137page �Ʒ��κ�

// sort �Լ��� ������ ���ô�.(���� �˰����� ������� ������, ���� ������ ����)
// ������ ���ڷ� "��� �� ���� ��å �Լ��� �޾Ƽ� ���"

// �Ʒ��ڵ�� ����å ��ü�� ����������
// �񱳸� ���� 2�߷����ȿ����� �Լ�ȣ���� �ֽ��ϴ�.
// ���� ���ϴ� �ڵ忡 ���ؼ� ���� �����ϴ�. 
// "����å�� ������ �� �ִµ� �������ϴ� ����" ���� �� �������?
// -> �� ����� STL �� ����ϴ� ��� (6_�Լ���ü6.cpp) 

void Sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			//if (x[i] > x[j])				// 1. ���� ��
											
			if (cmp(x[i], x[j]) == true)	// 2. ���Լ� ȣ��
				std::swap(x[i], x[j]);
		}
	}
}

//-------------------

inline bool cmp1(int a, int b) { return a > b; }
inline bool cmp2(int a, int b) { return a < b; }

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Sort(x, 10, cmp1);
	Sort(x, 10, cmp2);
}


#endif