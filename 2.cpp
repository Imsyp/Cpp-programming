#include <iostream>

int main(void)
{
char name[100];
char callnum[200];

std::cout << "이름은 무엇입니까? ";
std::cin >> name;

std::cout << "전화번호는 무엇입니까? ";
std::cin >> callnum;

std::cout << "내 이름은 " << name << "입니다.\n";
std::cout << "전화번호는 " << callnum << "입니다." << std::endl;
return 0;
}