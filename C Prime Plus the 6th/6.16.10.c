#include <stdio.h>
int main(void)
{
	int a, b;
	int sum = 0;
	printf("Enter lower and upper integer limits : ");
	scanf_s("%d %d", &a, &b);
	while (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			sum += i * i;
		}
		printf("The sums of the squares from %d to %d is %d\n", a * a, b * b, sum);
		printf("\nEnter lower and upper integer limits : ");
		scanf_s("%d %d", &a, &b);
		sum = 0;
	}
	printf("\nDone!\n");
	return 0;
}