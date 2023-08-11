#ifndef DAY3


#include <iostream> // ǥ�� ����� ��Ʈ��
#include <fstream>  // ȭ�� ��Ʈ��
#include <sstream>  // �޸�(��Ʈ��)��Ʈ��
#include <string>

#include <iomanip>


int main()
{
	double d = 3.141592; // ����ڰ� �Է��ߴٰ� ����

	// C���� d�� ���ڿ��� �������� "d = 3.141592"
	// -> �ּ��� �����?

	char s[8];
	sprintf(s, "%lf", d);		// d�� ���� 8�ڸ� �̻��̸�?
	snprintf(s, 8, "%lf", d);	// �����÷ο�� �ƴ����� "���� �߸��� �˴ϴ�"

	// C++ ��Ÿ��
	std::ostringstream oss;
	oss << std::setprecision(10);
	
	oss << "d = " << d; // cout �� ���� ����

	std::string s = oss.str();

	std::cout << s << std::endl;

	//-------------
	std::cout << 3.141592 << std::endl; // 3.1415 ������ ��µ˴ϴ�.

	std::cout << std::setprecision(10); // �Ǽ� ���е��� 10�ڸ����� �ش޶�
	

}


#endif