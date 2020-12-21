#include <stdio.h>
int main(void)
{
	int input;
	int count = 0, sum = 0;
	printf("Enter a number(integer).");
	scanf_s("%d", &input);
	for (count = 0; count <= input; count++)
		sum += count * count;
	printf("\nThe %d! is : %d\n\n", input, sum);
	return 0;
}