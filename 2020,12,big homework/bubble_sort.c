#include "function.h"
//冒泡法排序（有小到大）：
void bubble_sort(void)
{
	int sort[10];
	int temp;
	printf("Enter 10 integers\n");

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &sort[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (sort[j] > sort[j + 1])
			{
				temp = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = temp;
			}

		}
	}

	printf("\nThe new sorted numbers are:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", sort[i]);
	}
	printf("\n");

	return;
}

