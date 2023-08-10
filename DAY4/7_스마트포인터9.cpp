#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}

	~People() { std::cout << name << " �ı�" << std::endl; }


	//	std::shared_ptr<People> bf; // ��������� �����ϴ� ����Ʈ ������

	People* bf;			// raw pointer, ��ü�� �����ѵ�, ��������� �����ϴ� ���� �ƴ�
						// ������, �ڽ��� ����Ű�� �޸𸮰� �ı��Ǿ����� �����Ҽ� ����.
						// "dangling pointer" �� ������ �ִ�							
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2.get();
		sp2->bf = sp1.get();

	} // �̼��� sp2 �ı�
	  // sp2�� ����Ű�� "lee" ��ü�� �ı�

	// sp1->bf �� 0�� �ƴ�����, �̹� �ı��� �޸𸮸� ����Ű�� �˴ϴ�.
	if (sp1->bf != nullptr)
	{
		auto name = sp1->bf->name; // !!?? �� ������ ������..
	}

}


