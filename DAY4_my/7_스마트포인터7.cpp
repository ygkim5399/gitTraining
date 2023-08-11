#ifndef DAY4

#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

	std::shared_ptr<People> bf; // best friend
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	// ����Ʈ �����͸� ����ص� �Ʒ� �ڵ尡 ������ �޸� �����Դϴ�.
	sp1->bf = sp2;
	sp2->bf = sp1;
	// reference counting �� ����� ���ŵ��� �ʾ� delete�� ���� �ʴ´� 

	// ���� ���� �ڵ带 
	// "��ȣ����", "��������(cycle reference)" ���� ���� ǥ���մϴ�.
	// -> �̷� ������ �߻��Ǵ� �޸𸮰� �������� �ʽ��ϴ�.



}


#endif