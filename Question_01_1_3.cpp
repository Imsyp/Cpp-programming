#include <iostream>

int main(void)
{
	int val;
	std::cout << "������ �� ���ϴ� ���� �Է��Ͻÿ�. : ";
	std::cin >> val;

	std::cout << val << "���� ������ �����ϴ�.\n";
	
	int i = 1;

	while (i<10)
	{
		std::cout << val << " * " << i<<" = "<< i*val<<std::endl;
		i++;
	}

	return 0;
}