#ifndef DAY4

#include <iostream>
#include <string>
#include <map>
#include <functional>
#include <vector>
using namespace std::placeholders;


class NotificationCenter
{
	using HANDLER = std::function<void()>; // ��� �Լ� ��ϰ���
	//using HANDLER = std::function<void(void*)>;
	std::map<std::string, std::vector<HANDLER> > notif_map;
public:
	void addObserver(const std::string& key, HANDLER func) {
		notif_map[key].push_back(func);
	}
	void postNotificationWithName(const std::string& key) {
		for (auto f : notif_map[key]) { // notif_map[key] �� �ᱹ vector
			f();
		}
	}
};

void foo() { std::cout << "foo : " << std::endl; }
void goo(int a) { std::cout << "goo : " << std::endl; }


int main()
{
	// IOS ���߿� ���Ǵ� cocoa touch ���̺귯������ "�뺸����"��� ������ �ֽ��ϴ�. 

	// �Ʒ� ó�� ����ڰ� ���� �ǰ�(Local �뺸����)
	NotificationCenter nc;

	nc.addObserver("LOWBATTERY", &foo);

	//nc.addObserver("LOWBATTERY", &goo);
	nc.addObserver("LOWBATTERY", std::bind(&goo, 1));

	//nc.addObserver("DISCONNECT_WIFI", &goo);
	nc.addObserver("DISCONNECT_WIFI", std::bind(&goo, 2));
	nc.addObserver("DISCONNECT_WIFI", []() {std::cout << "lambda\n"; });

	// ���͸� ����ʿ��� ���͸��� ����������
	nc.postNotificationWithName("LOWBATTERY");
	nc.postNotificationWithName("DISCONNECT_WIFI");

}


// c++26�� ��Ʈ��ũ ���̺귯���� ��� �� �����ε�
// ��κ��� �뺸�� std::function ���� �ϰ� �� �����Դϴ�.
// -> �ð��ʰ�, ���ſ��� ��..



#endif