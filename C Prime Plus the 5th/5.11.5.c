#include <stdio.h>
int main(void)
{
	int input;
	int sum = 0, count = 0;

	printf("Enter a integer to count.\n");
	scanf_s("%d", &input);

	for (count=0;count<=input;count++)
		sum += count;
	printf("The sum from 1 to %d is %d.\n", input, sum);

	return 0;
}