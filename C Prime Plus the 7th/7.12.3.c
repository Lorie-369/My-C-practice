#include <stdio.h>
int main(void)
{
	int array[20];
	int odd = 0, even = 0, odd_count=0,even_count=0;
	float odd_aver = 0, even_aver = 0;
	printf("Enter some integers.\n");
	for (int i = 0; i < 20; i++)
	{
		scanf_s("%d", &array[i]);
		if (array[i] == 0)
		{
			break;
		}
		else if (array[i] % 2 == 0)
		{
			even += array[i];
			even_count++;
		}
		else
		{
			odd += array[i];
			odd_count++;
		}

	}
	odd_aver = (float)odd / odd_count;
	even_aver = (float)even / even_count;
	printf("There are %d odd number,the average is %.2f\n", odd_count, odd_aver);
	printf("There are %d even number,the average is %.2f\n\n", even_count, even_aver);
	return 0;
}