#include <iostream>

int main(void)
{
	double i = 0 ;
	do
	{
		double base = 50;
		double sell;

		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sell;

		i = sell;

		double result = base + sell * 0.12;

		if(i!=-1)
			std::cout << "�̹� �� �޿� : " << result << std::endl;
		
		else
			std::cout << "���α׷��� �����մϴ�.";

	} while (i != -1);

	return 0;
}