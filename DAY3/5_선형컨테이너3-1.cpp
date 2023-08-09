// 5_선형컨테이너3-1
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1;		// size = 0,   capacity = 0
	std::vector<int> v2(100);	// size = 100, capacity = 100

	std::vector<int> v3;
	v3.reserve(100);			// size = 0, capacity = 100

	
	v2.push_back(5); // 101번째에 넣기, 메모리 재할당 발생
	v3.push_back(5); // 1번째 넣기,    메모리 재할당 안됨.
}

// capacity, reserve 등의 개념은 연속된 메모리를 사용하는 컨테이너에만 
// 적용됩니다.
// => vector, string 등. 

// capacity 덕분에.. 
// => capacity > size 상황에서 vector 의 후방삽입은 성능이 아주 좋습니다.
// => 하지만, 메모리가 부족한 환경에서는 꼭 capacity 고려하세요!!!

// 파이썬 코드
// 파이썬의 list 는 C++ 의 vector 와 거의 동일 합니다.
// 
// s = [1, 2, 3] // 메모리는 실제 4개 할당 됩니다.  
// s.append(4)   // 메모리 재할당 안됩니다.
// s.append(5)   // 메모리 8개로 재할당 됩니다(size=5, capacity=8)
			  // 파이썬은 처음에는 4개씩 증가 하다가..
			  // 이후에는 8개... 16개... 32개... 씩 증가하는데
			  // 파이썬 버전 마다 다릅니다.


