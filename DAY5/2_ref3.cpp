#include <iostream>

// �ٽ� : value ��Ŀ�������� ����� �Լ� �� ������ 
//		  ������ ������ ������ reference_wrapper �� ����ϰ� �˴ϴ�.



void foo(int& a) { a = 200; }

// forward_foo : ���� ���ڸ� foo �� �����ϴ� �Լ�
//		 �ٽ�  : ���ڸ� �� Ÿ������ ���� �ް� �ֽ��ϴ�.
template<typename T> 
void forward_foo(T arg)
{
	foo(arg);
}

int main()
{
	int n = 10;
	
//	forward_foo(n);	// ���纻 ����
//	forward_foo(&n);// ���纻 ���� �޸� ����(�ּ�)����
				    // => ������, forward_foo ���� foo �� ������
					//    int* => int& �� ������ �����Ƿ� ����

//	std::reference_wrapper<int> r = n;	

	// r�� �ᱹ �ּҸ� ���������� int& �� ��ȯ�� �����մϴ�.
//	forward_foo(r); 

	// ��ó�� 2�ٷ� ���� ����, �Ʒ� ó�� �ϸ� �˴ϴ�.
	forward_foo( std::ref(n) ); // n �� ������ �����޶�!!
							    // std::ref() �� �ϴ����� �ᱹ
								// std::reference_wrapper �� �����մϴ�.	
	



	std::cout << n << std::endl; 
}
