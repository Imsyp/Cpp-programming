#include <iostream>

int main(void)
{
	char name[100];
	char callnum[200];

	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;

	std::cout << "��ȭ��ȣ�� �����Դϱ�? ";
	std::cin >> callnum;

	std::cout << "�� �̸��� " << name << "�Դϴ�."<<std::endl;
	std::cout << "��ȭ��ȣ�� " << callnum << "�Դϴ�." << std::endl;
	return 0;
}