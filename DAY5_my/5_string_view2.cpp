#ifndef DAY5

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
void f1(std::string name) {}		// worst
							// -> name ��ü�Ӹ� �ƴ϶�, ���ڿ� ��ü���� ����
void f2(const std::string& name) {}	// good, best�� �ƴ�
									// s �� �ּҿ� �����ϰ� s�� ������ �ִ� ���ڿ��� �ּҷ� �̵�
									// �����͸�ŭ�� �޸� ���

void f3(std::string_view name)   {}	// best!!
									// s �� ������ �ִ� ���ڿ��� �ּҷ� �ٷ� �̵�
									// ������ + ���ڿ� ���� ��ŭ�� �޸� ���


int main()
{
	std::string s = "to be or not to be";
	
	//f1(s);	// worst
	//------------------------------
	// �Ʒ� ��쿡�� f2, f3 �� ����մϴ�.
	f2(s);
	f3(s);

	// �׷��� �Ʒ��� �����غ�����
	// ���ͷ��� ���� ������,
	std::cout << "---------" << std::endl;


	//f2("to be or not to be");	// ���ͷ��� ������ string �� �ӽð�ü�� �����. 
								// ���� �޸� �Ҵ��ؼ� ���ڿ� ������ ����ϴ� �ӽð�ü ����
						// ���ڿ��� ������ string �ӽð�ü ����
						// �ӽð�ü ���� ��, ���� ���ڿ��� ����
						// f2 ȣ�� ������ �ӽð�ü �ı�

	f3("to be or not to be");	// ����޸𸮸� �ٷ� ����Ų��.
						// string view �� ����޸𸮿� �ִ� ���ڿ��� 
						// ����Ű�⸸ �ϰ� �˴ϴ�.

	std::cout << "---------" << std::endl;
}

// ���� : �Լ����ڷ� �б⸸ �ϴ� ���ڿ��� ��������
// -> const::std::string& ����
// -> std::string_view �� �����մϴ�.

// RUST			C++
// string	-> std::string
// &str		-> std::string_view
#endif