#include <iostream>
using namespace std;

void main(void)
{
	int value = 5, value2 = 11;
	int* const ptr = &value;
	*ptr = 10;
	value = 10;
	cout << value << " " << *ptr << endl;
	value = 7;
	cout << value << " " << *ptr << endl;
}