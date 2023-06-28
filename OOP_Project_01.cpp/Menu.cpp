#include "head.h"


int BankSystem::Menu(void)
{
	cout << "-----Menu------\n" << "1. 계좌계설\n" << "2. 입 금\n" << "3. 출 금\n" << "4. 계좌정보 전체 출력\n" << "5. 프로그램 종료\n";
	cout << "선택: ";

	int choice;
	cin >> choice;

	cout << endl;

	return choice;
}