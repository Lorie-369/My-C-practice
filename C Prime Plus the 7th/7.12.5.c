#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[20];
	int change = 0;
	int n = 0;
	printf("Enter some ! and '.'\n");
	for (int i = 0; i < 20; i++)
	{
		scanf_s("%c", &str[i],sizeof(str[i]));
		if (str[i] == '#')
		{
			str[i] = '\0';
			break;
		}
		switch (str[i])
		{
		case '!':str[i + 1] = '!'; i++; change++; break;
		case '.':str[i] = '!'; change++; break;
		}
	}
	n = strlen(str);
	for (int i = 0; i < n; i++)
	{
		printf("%c", str[i]);
	}
	printf("\nThere are %d times of changing.\n\n",change);
	return 0;
}