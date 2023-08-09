// 5_���������̳�3-1
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1;		// size = 0,   capacity = 0
	std::vector<int> v2(100);	// size = 100, capacity = 100

	std::vector<int> v3;
	v3.reserve(100);			// size = 0, capacity = 100

	
	v2.push_back(5); // 101��°�� �ֱ�, �޸� ���Ҵ� �߻�
	v3.push_back(5); // 1��° �ֱ�,    �޸� ���Ҵ� �ȵ�.
}

// capacity, reserve ���� ������ ���ӵ� �޸𸮸� ����ϴ� �����̳ʿ��� 
// ����˴ϴ�.
// => vector, string ��. 

// capacity ���п�.. 
// => capacity > size ��Ȳ���� vector �� �Ĺ������ ������ ���� �����ϴ�.
// => ������, �޸𸮰� ������ ȯ�濡���� �� capacity ����ϼ���!!!

// ���̽� �ڵ�
// ���̽��� list �� C++ �� vector �� ���� ���� �մϴ�.
// 
// s = [1, 2, 3] // �޸𸮴� ���� 4�� �Ҵ� �˴ϴ�.  
// s.append(4)   // �޸� ���Ҵ� �ȵ˴ϴ�.
// s.append(5)   // �޸� 8���� ���Ҵ� �˴ϴ�(size=5, capacity=8)
			  // ���̽��� ó������ 4���� ���� �ϴٰ�..
			  // ���Ŀ��� 8��... 16��... 32��... �� �����ϴµ�
			  // ���̽� ���� ���� �ٸ��ϴ�.


