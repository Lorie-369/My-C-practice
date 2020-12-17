#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	char str[10];
	printf("Enter a string.\n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%c", &str[i],sizeof(str[i]));
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}
	n = strlen(str);
	printf("The new string is :\n");
	for (int j = n - 1; j >= 0;j--)
	{
		printf("%c", str[j]);
	}
	printf("\n");
	return 0;
}