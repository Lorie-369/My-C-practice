#include <stdio.h>
int main(void)
{
	double sum = 100.0;
	int year = 0;
	do
	{
		year++;
		sum *= 1.08;
		sum -= 10;
	} while (sum>0);
	printf("After %d years \nThe sum is %.2lf\nthe account of Chuckie has no money!\n\n", year,sum);
	return 0;
}