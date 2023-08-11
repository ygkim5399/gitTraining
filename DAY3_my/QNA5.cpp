#ifndef DAY3

namespace Graphic {
	struct Point {
		int x, y;
	};
	void init(const Point& pt) {}

}


int main() {
	//Point pt; // error;
	Graphic::Point pt; // ok

	init(pt); // 왜 에러가 아닐까요?? 
			// c++ 에서는 어떠한 함수를 검색할때 
			// 인자가 포함되어 있는 경우는 자동으로 검색된다.
			// 인자 pt 가 Graphics 이름 공간안에 있으므로 
			// init 을 찾을때 자동으로 Graphics 이름 공간도 검색에 포함
			// "인자기반 탐색 (Argument Dependent Lookup, ADL)"


}


#endif