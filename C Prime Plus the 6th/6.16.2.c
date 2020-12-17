#include <stdio.h>
int main(void)
{
	for (int n = 1; n <= 5; n++)
	{
		for (int i = 0; i < n; i++)
		{
			printf("$");
		}
		printf("\n");
	}
	return 0;
}