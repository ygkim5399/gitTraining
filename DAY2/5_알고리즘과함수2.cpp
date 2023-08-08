#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

// ���� �Լ�
int foo(int a, int b) { return a + b; }

int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10 };
    std::list<int> s3;

    // transform �˰���
    std::transform( s1.begin(), s1.end(),  // 1. �� ������ ��� ��Ҹ�
                    s2.begin(),            // 2. �� ������ ��ҿ� �Բ�
                    std::back_inserter(s3),// 4. �̰��� �־�޶�
                    foo);                  // 3. ���Լ��� ������ ��ȯ����

    show(s3);

	return 0;
}



















//
