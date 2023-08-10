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
	// weak 정리

	std::shared_ptr<Car> sp;
	std::weak_ptr<Car>   wp;

//	{
		std::shared_ptr<Car> p(new Car);
	
		//sp = p; // 참조계수 증가
		wp = p;   // 참조계수 증가 안함.
		
		std::cout << p.use_count() << std::endl; // 
//	}

	if (!wp.expired()) // 아직 객체가 파괴 안되었다면
	{
		// wp 를 사용해서 객체에 접근!!???
//		wp->Go(); // error. weak 에는 -> 연산자가 정의되어 있지 않습니다.
					// wp 는 참조 계수를 증가하지 않으므로
					// 자원에 대한 소유권이 없습니다.
					// 따라서, wp 로 자원에 접근하고 있는 도중에
					// 자원을 소유하던 shared_ptr ( p ) 가 파괴되면 
					// 자원 자체도 파괴 되므로..!!

		// 해결책 
		// => wp로 자원에 접근하려면, 참조계수를 늘리고 접근해야 합니다.
		// => 참조계수를 늘리려면 shared_ptr 을 만드는 방법 밖에 없습니다.
		std::shared_ptr<Car> sp3 = wp.lock();

		if (sp3) // sp3가 가리키는 곳이 유효한지 다시 확인
			sp3->Go();
	}



	std::cout << "------" << std::endl;
}

