#include <stdio.h>
int main(void)
{
	int sum = 5;
	int week = 0;
	do
	{
		week++;
		sum -= week;
		sum *= 2;
	} while (sum<=150);
	printf("After %d weeks\nRabnud has %d friends.\n\n", week, sum);
	return 0;
}