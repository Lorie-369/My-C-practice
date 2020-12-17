#include <stdio.h>
int main(void)
{
	char letter;
	printf("Enter a letter : ");
	scanf_s("%c", &letter,sizeof(letter));
	for (int n = 0; n < 5; n++)
	{
		int j;
		for (int m = 0; m < 4-n; m++)
		{
			printf(" ");
		}
		for ( j = 4; j > 4 - n; j--)
		{
			printf("%c", letter - j);
		}
		for (;j<=4;j++)
		{
			printf("%c", letter - j);
		}
		for (int m = 0; m < 4 - n; m++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}