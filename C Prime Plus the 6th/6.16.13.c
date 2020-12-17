#include <stdio.h>
int main(void)
{
	int array[8] = { 1,1,1,1,1,1,1,1 };
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			array[i] *= 2;
		}
	}
	printf("The array is \n");
	int m = 0;
	do
	{
		printf("%d\t", array[m]);
		m++;
	} while (m < 8);
	printf("\n");
	return 0;
}