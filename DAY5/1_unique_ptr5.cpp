#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> p1(new int);
//	std::unique_ptr<int> p2 = p1;			 // error. ����ɼ� �����ϴ�.
	std::unique_ptr<int> p3 = std::move(p1); // ok. move �ɼ� �ֽ��ϴ�.	


	// shared_ptr �� unique_ptr �� ����/���� ����
	std::unique_ptr<int> up(new int);
	std::shared_ptr<int> sp(new int);

	// ������ ������ ?
	std::shared_ptr<int> sp1 = up;				// error
	std::shared_ptr<int> sp2 = std::move(up);	// ok

	std::unique_ptr<int> up1 = sp;				// error
	std::unique_ptr<int> up2 = std::move(sp);	// error. 
}
