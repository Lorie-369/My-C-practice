#include <stdio.h>
int main(void)
{
	int guess = 1;
	int min = 1;
	int max = 100;
	char input;
	char space;
	printf("Pick an integer fromm 1 to 100.Iwill try to guess.\n");
	printf("Respond with a m if my guess is more\nand l if my guess is less.\nand y is my guess is right.\n");
	printf("Is your number %d?\n",guess);
	input = getchar();
	while (input!='y')
	{
		while (getchar() != '\n')
			//continue;
			break;  //break 和 continue 都可以！
		if (guess == 1)
		{
			if (input == 'm')
			{
				printf("Wrong !\nwe don't have any number smaller than 1!\nPlease enter again.\n");
				input = getchar();
			}
		}
		if (guess == 100)
		{
			if (input == 'l')
			{
				printf("Wrong!\nWe don't have any number bigger than 100.\n Please enter again.\n");
				input = getchar();
			}
		}
		if (input == 'l')
		{
			min = guess;
			guess = (min + max) / 2;
		}
		if (input == 'm')
		{
			max = guess;
			guess = (min + max) / 2;
		}
		printf("Is your number %d?\n", guess);
		printf("Respond with a m if my guess is more\nand l if my guess is less.\nand y is my guess is right.\n");
		input = getchar();
	}
	printf("I have guess the number.\nThe number is %d.\n", guess);
	return 0;
}