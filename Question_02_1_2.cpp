#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	//SwapByRef2(23, 45); -> 컴파일 에러 : 참조자는 상수를 참조할 수 없기 때문에 매개변수의 인자로 반드시 변수가 등장해야 한다.
	return 0;
}