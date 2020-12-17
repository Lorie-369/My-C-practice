#include <stdio.h>
int main(void)
{
	char letter = 'F';
	for (int n = 1; n <= 6; n++)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%c", letter - i);
		}
		printf("\n");
	}
	return 0;
}