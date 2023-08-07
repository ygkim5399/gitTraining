#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

// �ݺ��� : �ᱹ ��� ����Ÿ�� "������ �Ѱ�" ���� ���Դϴ�.
//          ũ�� �۽��ϴ�. call by value�� ��������
// 
// value : ���� Ÿ���Դϴ�. std::string �� �ɼ��� �ֽ��ϴ�.
//         const T& �� �����ϴ�.
template<typename InputIter, typename T>
InputIter find(InputIter first, InputIter last, const T& value)
{
	while (first != last && *first != value)
		++first;
	return first;
}

int main()
{
	int x[3] = {1,2,3};

	auto p = find(std::begin(x), std::end(x), 2);

}