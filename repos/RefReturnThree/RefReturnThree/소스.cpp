#include <iostream>
using namespace std;

int RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);
	/*
	RefReturnTwo와 거의 모든 과정이 같지만 차이점이 하나 있다.
	->Two의 형태에서는 num2를 num1의 참조자(int& num2 = ...)로 설정할지 아예 새로운 변수(int num2 = ...)로 설정할지 선택할 수 있지만,
	위 형태에서는 참조자로서 설정이 불가능하다.
	*/
	num1+=1;
	num2+=100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}