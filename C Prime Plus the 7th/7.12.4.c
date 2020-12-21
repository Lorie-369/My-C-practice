#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[20];
	int change = 0;
	int n;
	printf("Enter some ! and '.'\n");
	for (int i = 0; i < 20; i++)
	{
		scanf_s("%c", &str[i],sizeof(str[i]));
		if (str[i] == '#')
		{
			str[i] = '\0';
			break;
		}
		else if (str[i] == '!')
		{
			str[i + 1] = '!';
			i++;
			change++;
		}
		else if (str[i] == '.')
		{
			str[i] = '!';
			change++;
		}
	}
	n = strlen(str);
	for (int i = 0; i < n; i++)
	{
		printf("%c", str[i]);
	}
	printf("\nThere are %d times of changing.\n\n", change);
	return 0;
}