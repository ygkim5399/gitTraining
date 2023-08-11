#ifdef DAY4

#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

	//std::shared_ptr<People> bf;	// ��������� �����ϴ� ����Ʈ ������
	//People* bf;						// raw pointer, ��ü�� �����ѵ�, ��������� �����Ѵ� ���� �ƴ�
									// ������, �ڽ��� ����Ű�� �޸𸮰� �ı��Ǿ����� ������ �� ����.
									// "dangling pointer" �� ������ �ִ�.

	std::weak_ptr<People> bf;		// ��������� �������� �ʴ� ����Ʈ ������
									// �ڽ��� ����Ű�� �޸𸮰� �ı��Ǿ����� ������ �� �ִ�.

};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));


		sp1->bf = sp2;
		sp2->bf = sp1;
	}

	//if (sp1->bf.expired()) { // expired ������ �ʿ䰡 ����. ������ �Ʒ� if(sp3) �� �����ϱ� ����
	//	std::cout << "����Ű�� ���� �ı���\n";
	//}
	//else {
	//	std::cout << "�ı� �ȵ� \n";
		
		// �����Ϸ��� shared_ptr ���� ���
	// sp1->bf, ��, weak �� ��ü �����Ϸ��� �ᱹ �Ʒ�ó���ϸ� �˴ϴ�.
		std::shared_ptr<People> sp3 = sp1->bf.lock();
		if (sp3) {
			auto name = sp3->name;
		}
	//}



}


#endif