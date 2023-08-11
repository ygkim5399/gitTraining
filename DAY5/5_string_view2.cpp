// 5_string_view
#include <iostream>
#include <string>
#include <string_view>


void* operator new(std::size_t sz)
{
	std::cout << sz << "�޸� �Ҵ�" << std::endl;
	return malloc(sz);
}


// �Լ��� ���ڷ� ���޹��� ���ڿ��� �б⸸ �Ѵٸ�
// ������ �ּ��� �ڵ�� ?
void f1(std::string name) {} // worst..!!!
				// => name ��ü�Ӿƴ϶�, ���ڿ� ��ü ���� ����


void f2(const std::string& name) {}	// good ������ best�� �ƴ�.



void f3(std::string_view name)   {}	// best!!




int main()
{
	std::string s = "to be or not to be";
	f1(s); // �־�!!!
	//-----------------------------------------
	// �Ʒ� ���� f2, f3�� ����մϴ�.
	f2(s);
	f3(s);
	//-------------------------------------------
	// �׷���!!! �Ʒ��� ������ ������
	// ���ͷ��� ���� ������
	std::cout << "=========================" << std::endl;
	f2("to be or not to be");
				// => ���ڿ��� ������ string �ӽð�ü ����
				// => �ӽð�ü ���鶧, ���� ���ڿ��� ����
				// => f2 ȣ�� ������ �ӽð�ü �ı�!!!

//	f3("to be or not to be");	
				// => string_view �� ����޸𸮿� �ִ� ���ڿ���
				// => ����Ű�⸸ �ϰ� �˴ϴ�.

	std::cout << "=========================" << std::endl;
}

// ���� : �Լ� ���ڷ� �б⸸�ϴ� ���ڿ��� ��������
// => const std::string&   ����
// => std::string_view �� �����մϴ�.!!!

// RUST         C++
// String   => std::string
// &str     => std::string_view