#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>
#include <iomanip>
int main()
{
	double d = 3.141592; // ����ڰ� �Է��ߴٰ� ����

	// C���� d �� ���ڿ��� ����� ������. 
	// => �ּ��� ����� ?
//	char s[8];
//	sprintf(s, "%lf", d);     // d �� ���� 8 �ڸ� �̻��̸� ?
//	snprintf(s, 8, "%lf", d); // �����÷ο�� �ƴ����� "���� �߸��Ե˴ϴ�"

	// C++ ��Ÿ��
	std::ostringstream oss;
	oss << std::setprecision(10);

	oss << "d = " << d;  // cout �� ���� ����

	std::string s = oss.str();

	

	std::cout << s << std::endl;
}
