#include <stdio.h>
int main(void)
{
	int sort[8];
	printf("Enter 8 integers.\n");
	for (int i = 0; i < 8; i++)
	{
		scanf_s("%d", &sort[i]);
	}
	printf("The new sort is :\n");
	for (int j = 7; j >= 0; j--)
	{
		printf("%d\t", sort[j]);
	}
	return 0;
}