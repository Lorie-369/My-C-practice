#include <stdio.h>
int main(void)
{
	char str[100];
	int count = 0;
	printf("Enter a string.\n");
	for (int i = 0; i < 100; i++)
	{
		scanf_s("%c", &str[i], sizeof(str[i]));
		if (str[i] == '#')
		{
			str[i] = '\0';
			break;
		}
		if (i > 0)
		{
			if (str[i] == 'i' && str[i - 1] == 'e')
			{
				count++;
			}
		}
	}
	printf("There are %d ei in this string.\n",count);
	return 0;
}