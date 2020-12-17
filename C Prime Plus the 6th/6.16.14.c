#include <stdio.h>
int main(void)
{
	double array1[8],array2[8];
	printf("Enter 8 doubles to array1.\n");
	for (int i = 0; i < 8; i++)
	{
		scanf_s("%lf", &array1[i]);
	}
	array2[0] = array1[0];
	for (int i = 1; i < 8; i++)
	{
		array2[i] = array1[i] + array2[i - 1];
	}
	printf("\nThe array1 is :\n");
	for (int i = 0; i < 8; i++)
	{
		printf("%9.2lf", array1[i]);
	}
	printf("\nThe array2 is :\n");
	for (int i = 0; i < 8; i++)
	{
		printf("%9.2lf", array2[i]);
	}
	printf("\n");
	return 0;
}