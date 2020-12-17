#include <stdio.h>
int main(void)
{
	char letter = 'A';
	int i = 0;
	for (int n = 1; n <= 6; n++)
	{
		for (int m=0;m<n;m++)
		{
			printf("%c", letter + i);
			i++;
		}
		printf("\n");
	}
	return 0;
}