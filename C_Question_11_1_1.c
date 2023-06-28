#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int arr1Len, i;
	int arr1[5];
	int max, min, sum=0;

	arr1Len = sizeof(arr1) / sizeof(int);

	for (i = 0; i < 5; ++i)
	{
		printf("정수를 입력하시오.");
		scanf("%d", &arr1[i]);
	}

	for (i = 0; i < 5; ++i)
	{
		max =arr1[0];
		min =arr1[0];
		sum += arr1[i];

		if (max <= arr1[i])
		{
			max = arr1[i];
		}

		if (min >= arr1[i])
		{
			min = arr1[i];
		}
	}

	printf("최대값: %d \n최소값: %d \n총 합: %d", max, min, sum);

	return 0;
}