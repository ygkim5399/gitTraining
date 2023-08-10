#include <iostream>
#include <memory>

class Car
{
public:
	void Go() {}
	~Car() {std::cout << "~Car" << std::endl;	}
};
int main()
{
	// weak ����

	std::shared_ptr<Car> sp;
	std::weak_ptr<Car>   wp;

//	{
		std::shared_ptr<Car> p(new Car);
	
		//sp = p; // ������� ����
		wp = p;   // ������� ���� ����.
		
		std::cout << p.use_count() << std::endl; // 
//	}

	if (!wp.expired()) // ���� ��ü�� �ı� �ȵǾ��ٸ�
	{
		// wp �� ����ؼ� ��ü�� ����!!???
//		wp->Go(); // error. weak ���� -> �����ڰ� ���ǵǾ� ���� �ʽ��ϴ�.
					// wp �� ���� ����� �������� �����Ƿ�
					// �ڿ��� ���� �������� �����ϴ�.
					// ����, wp �� �ڿ��� �����ϰ� �ִ� ���߿�
					// �ڿ��� �����ϴ� shared_ptr ( p ) �� �ı��Ǹ� 
					// �ڿ� ��ü�� �ı� �ǹǷ�..!!

		// �ذ�å 
		// => wp�� �ڿ��� �����Ϸ���, ��������� �ø��� �����ؾ� �մϴ�.
		// => ��������� �ø����� shared_ptr �� ����� ��� �ۿ� �����ϴ�.
		std::shared_ptr<Car> sp3 = wp.lock();

		if (sp3) // sp3�� ����Ű�� ���� ��ȿ���� �ٽ� Ȯ��
			sp3->Go();
	}



	std::cout << "------" << std::endl;
}

