#include <stdio.h>
int main(void)
{
	int input;
	int k;
	int flag = 0;
	printf("Enter an input:\nEnter q to quit.\n");
	k=scanf_s("%d", &input);
	while (k == 1)
	{
		if (input <= 0)
		{
			printf("Wrong input!\nPlease enter a number more than 0\n");
			printf("Enter an input : ");
			k=scanf_s("%d", &input);
		}
		else
		{
			printf("There are some prime number smaller than %d\nThere are :\n", input);
			for (int i = 2; i <= input; i++)
			{
				for (int n = 2; n * n <= i; n++)
				{
					if (i % n == 0)
					{
						flag = 1;
						break;
					}

				}
				if (flag == 0)
				{
					printf("%d\t", i);
				}
				flag = 0;
			}
			printf("\nEnter an input:\nEnter q to quit.\n ");
			k = scanf_s("%d", &input);

		}
	}
	printf("\nDone!\n");
	return 0;
}