#ifndef DEBUG

#include <iostream>
#include <list>
#include <filesystem>

// �ݺ����� ����
// -> "�ݺ���ó�� �����ϴ� ������ �ݺ����̴�.
// -> ++ �� �̵������ϰ�, *�� ������� ������ �� 

// �ݺ����� ����
// 1. raw pointer �� �ݺ��ڷ� �з��մϴ� (int*p = x)
// 2. �� �����̳ʿ��� ������ �ݺ��� (auto p = v.begin());
// 3. �����̳ʿ� ���þ��� ���������� ��������� ����ϴ� �ݺ��ڵ鵵 �ֽ��ϴ�.
// 

int main()
{
	std::filesystem::directory_iterator p("C:\\windows");

	std::cout << *p << std::endl;
	++p;
	std::cout << *p << std::endl;
}










#endif