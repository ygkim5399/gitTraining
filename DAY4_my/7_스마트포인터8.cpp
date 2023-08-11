#ifndef DAY4

#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

	//std::shared_ptr<People> bf; // ��������� �����ϴ� ����Ʈ ������
	People* bf;		// raw pointer, ��ü�� �����ѵ�, ��������� �����Ѵ� ���� �ƴ�

};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	// bf �� raw pointer �̹Ƿ� �Ʒ�ó�� ����Ʈ �����͸� ���� ������ �� �����ϴ�.
	//sp1->bf = sp2;
	//sp2->bf = sp1;


	sp1->bf = sp2.get();	// get() : ����Ʈ �����Ͱ� �����ϴ� ��ü�� ����Ŵ
	sp2->bf = sp1.get();

	// �� �ڵ�� ���� �޸� ���� �����ϴ�.
	// �׷���... �ٸ� ������ �ֽ��ϴ�. 
	// ���� ������ ������ ������.





}


#endif