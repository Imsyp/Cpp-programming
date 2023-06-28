#include <iostream>

int main(void)
{
	int val;
	std::cout << "구구단 중 원하는 단을 입력하시오. : ";
	std::cin >> val;

	std::cout << val << "단은 다음과 같습니다.\n";
	
	int i = 1;

	while (i<10)
	{
		std::cout << val << " * " << i<<" = "<< i*val<<std::endl;
		i++;
	}

	return 0;
}