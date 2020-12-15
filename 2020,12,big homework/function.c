#include "function.h"
//心形函数
void heart_shape(void)
{
	char heart_shape[13][17] = { 0 };

	for (int i = 0, j = 4, k = 12, count = 0; i < 5; i++, count++)
	{

		heart_shape[i][j] = '*';
		heart_shape[i][k] = '*';
		if (count != 0)
		{
			heart_shape[i][j] = 32;//ASCII中空格对应的值为32
			heart_shape[i][k] = 32;
			heart_shape[i][k + count] = '*';
			heart_shape[i][k - count] = '*';
			heart_shape[i][j + count] = '*';
			heart_shape[i][j - count] = '*';

		}

	}

	for (int i = 5, j = 1, k = 15; i < 13; i++, j++, k--)
	{
		heart_shape[i][j] = '*';
		heart_shape[i][k] = '*';
	}
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 17; j++)
			printf("%c", heart_shape[i][j]);
		printf("\n");
	}
	printf("\n");
	printf("Have a nice day!");
	printf("\n");

	return;
}


//hanoi问题：
void hanoi_solution(void)
{
	void hanoi(int n, char, char, char);
	int n;
	printf("Enter the number of diskes that need to move.\n");
	scanf_s("%d", &n);
	printf("The route of moving %d diskes are :\n", n);
	hanoi(n, 'A', 'B', 'C');
	return ;
}

void hanoi(int n, char a, char b, char c)
{
	void move(char, char);
	if (n == 1)
		move(a, c);
	else
	{
		hanoi(n - 1, a, c, b);
		move(a, c);
		hanoi(n - 1, b, a, c);
	}
	return;
}

void move(char x, char y)
{
	printf("%c-->%c\n", x, y);
	return;
}
