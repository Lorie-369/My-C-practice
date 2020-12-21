#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[20];
	int n = 0;
	printf("Enter a string.\n");
	for (int i = 0; i < 20; i++)
	{
		scanf_s("%c", &str[i],sizeof(str[i]));
		if (str[i] == '#')
		{
			str[i] = '\0';
			break;
		}
	}
	n = strlen(str);
	printf("The details are :\n");
	for (int i = 0; i < n; i++)
	{
		printf("%c--%d\t", str[i], str[i]);
		if ((i+1) % 8 == 0)
		{
			printf("\n");
		}
	}
	printf("\nDone!\n\n");
	return 0;
}