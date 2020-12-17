#include <stdio.h>

int main(void)
{
	int upper_limit, lower_limit;
	printf("Enter a upper limit : ");
	scanf_s("%d", &upper_limit);
	printf("\nEnter a lower limit : ");
	scanf_s("%d", &lower_limit);
	printf("\n");
	if (lower_limit <= upper_limit)
	{
		for (int i = lower_limit; i <= upper_limit; i++)
		{
			printf("%d\t%d\t%d\n", i, i * i, i * i * i);
		}
	}
	else
		printf("The input is wrong!\n");
	return 0;
}

