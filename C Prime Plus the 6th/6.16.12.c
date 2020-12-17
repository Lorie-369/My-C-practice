#include <stdio.h>
int main(void)
{
	int input;
	double sum1 = 0, sum2 = 0;
	printf("Enter an integer : ");
	scanf_s("%d", &input);
	while (input > 0)
	{
		for (int i = 1; i <= input; i++)
		{
			sum1 += 1.0 / i;
		}
		printf("The sum1 is %lf\n", sum1);
		for (int j = 1; j <= input; j++)
		{
			if (j % 2 == 0)
				sum2 += (-1)*1.0 / j;
			else
				sum2 += 1.0 / j;
		}
		printf("The sum2 is %lf\n", sum2);
		printf("Enter an integer : ");
		scanf_s("%d", &input);
		sum1 = 0;
		sum2 = 0;
	}
	printf("\nDone!\n");
	return 0;
}