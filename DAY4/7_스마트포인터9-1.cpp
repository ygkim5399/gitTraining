#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}

	~People() { std::cout << name << " �ı�" << std::endl; }


//	std::shared_ptr<People> bf; // ��������� �����ϴ� ����Ʈ ������

//	People* bf;			// raw pointer, ��ü�� �����ѵ�, ��������� �����ϴ� ���� �ƴ�
						// ������, �ڽ��� ����Ű�� �޸𸮰� �ı��Ǿ����� �����Ҽ� ����.
						// "dangling pointer" �� ������ �ִ�	
						// 

	std::weak_ptr<People> bf;	// ��������� �������� �ʴ� ����Ʈ ������
								// �ڽ��� ����Ű�� �޸𸮰� �ı��Ǿ����� ���� �Ҽ� �ִ�
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2;
		sp2->bf = sp1;

	} 
	if (sp1->bf.expired() )
	{
		std::cout << "����Ű�� ���� �ı���\n";
	}
	else
	{
		std::cout << "����Ű�� ���� �ı� �ȵ�\n";
	}

}


