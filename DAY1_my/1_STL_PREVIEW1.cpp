// 1_STL_PREVIEW1
#include <iostream>
#include <string>

int main()
{
	char s1[] = "Hello";
	char s2[] = "Hello";

	if (s1 == s2) {} // ���ڿ��� �ּҸ� ���̹Ƿ� �׻� false

	/// Updated
	if (strcmp(s1, s2) == 0) {} // same 
	/// Updated


	//s2 = s1; // �ǵ� : ���ڿ� ����, ���� : compile error �迭�� �̸��� ������ �� ����. 
	
	/// Updated
	//strcpy(s2, s1); 
	// or
	strcpy_s(s2, strlen(s1), s1);
	/// Updated


	// c++ �� std::string �� ����ϸ� ��
	// => ���ڿ��� ������ ����ó�� ���갡��
	std::string s3 = "Hello";
	std::string s4 = "Hello";

	if (s3 == s4) {}
	//s3 = s4;
	s3 = s4 + s4;
	std::cout << s3 << std::endl;

	//s3 = s4 * 20;  // ���̽�ó�� �Ұ��� ������ ���� �� �ִ�. (operator*() ������) 

}