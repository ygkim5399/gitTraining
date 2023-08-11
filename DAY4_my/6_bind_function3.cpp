#ifndef DAY4

#include <iostream>
#include <string>
#include <map>
#include <functional>
#include <vector>
using namespace std::placeholders;


class NotificationCenter
{
	using HANDLER = std::function<void()>; // 모든 함수 등록가능
	//using HANDLER = std::function<void(void*)>;
	std::map<std::string, std::vector<HANDLER> > notif_map;
public:
	void addObserver(const std::string& key, HANDLER func) {
		notif_map[key].push_back(func);
	}
	void postNotificationWithName(const std::string& key) {
		for (auto f : notif_map[key]) { // notif_map[key] 는 결국 vector
			f();
		}
	}
};

void foo() { std::cout << "foo : " << std::endl; }
void goo(int a) { std::cout << "goo : " << std::endl; }


int main()
{
	// IOS 개발에 사용되는 cocoa touch 라이브러리에는 "통보센터"라는 개념이 있습니다. 

	// 아래 처럼 사용자가 만들어도 되고(Local 통보센터)
	NotificationCenter nc;

	nc.addObserver("LOWBATTERY", &foo);

	//nc.addObserver("LOWBATTERY", &goo);
	nc.addObserver("LOWBATTERY", std::bind(&goo, 1));

	//nc.addObserver("DISCONNECT_WIFI", &goo);
	nc.addObserver("DISCONNECT_WIFI", std::bind(&goo, 2));
	nc.addObserver("DISCONNECT_WIFI", []() {std::cout << "lambda\n"; });

	// 배터리 모듈쪽에서 배터리가 부족해지면
	nc.postNotificationWithName("LOWBATTERY");
	nc.postNotificationWithName("DISCONNECT_WIFI");

}


// c++26에 네트워크 라이브러리가 들어 올 예정인데
// 대부분의 통보를 std::function 으로 하게 될 예정입니다.
// -> 시간초과, 수신에러 등..



#endif