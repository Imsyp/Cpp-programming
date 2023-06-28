#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);//함수 내부에서 num1의 참조자 ref가 생성되어 ref에 1을 더해 num1을 변환시키는 동시에 새로운 변수 num2를 만든다. 함수를 벗어나며 ref는 사라진다.

	num1+=1;
	num2+=100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}