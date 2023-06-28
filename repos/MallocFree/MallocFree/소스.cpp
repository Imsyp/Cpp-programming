#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void main()
{
	int* pPoint;
	pPoint = (int*)malloc(sizeof(int) * 5);

	pPoint[0] = 25;
	pPoint[1] = 45;
	pPoint[2] = 50;
	pPoint[3] = 70;
	pPoint[4] = 99;

	int i = 0;
	for (i = 0; i < 5; i++)
		cout << "pPoint[%d] : %d\n" << i << pPoint[i];

	free(pPoint);
}