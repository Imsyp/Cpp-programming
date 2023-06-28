#include <stdio.h>

int main(void)
{
	int i = 1, dan = 0;

	printf("¸î ´Ü?: ");
	scanf("%d", &dan);

	while (i < 10)
	{
		printf("%d x %d = %d", dan, i, dan*i);
		i++;
	}

	return 0;
}