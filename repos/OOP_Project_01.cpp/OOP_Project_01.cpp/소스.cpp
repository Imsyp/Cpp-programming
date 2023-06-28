#include "head.h"
using namespace BankSystem;

void main(void)
{

	int choice = Menu();

	if (choice == 1)
	{
		MakeAccount();
	}

	else if(choice == 2)
	{
		Deposit();
	}
}