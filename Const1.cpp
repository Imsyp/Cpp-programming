#include <iostream>
using namespace std;

void main(void)
{
	int value = 5;
	int * ptr = &value;
	cout << ptr<<endl;
	value = 10;
	cout << value << " " << ptr;
}