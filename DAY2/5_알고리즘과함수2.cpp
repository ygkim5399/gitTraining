#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10 };
    std::list<int> s3;

    // transform �˰���
    std::transform( s1.begin(), s1.end(),  // 1. �� ������ ��� ��Ҹ�
                    s2.begin(),            // 2. �� ������ ��ҿ� �Բ�
                    s3.begin(),            // 4. 3�� ����� �̰��� �־�޶�
                    foo);                  // 3. ���Լ��� ������ 

	return 0;
}



















//
