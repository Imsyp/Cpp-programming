#include <iostream>

int main(void)
{
	double i = 0 ;
	do
	{
		double base = 50;
		double sell;

		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> sell;

		i = sell;

		double result = base + sell * 0.12;

		if(i!=-1)
			std::cout << "이번 달 급여 : " << result << std::endl;
		
		else
			std::cout << "프로그램을 종료합니다.";

	} while (i != -1);

	return 0;
}