#include <stdio.h>
#include <String.h>
int main(void)
{
	int n;
	char str[10];
	printf("Enter a string.\n");
	for (int j = 0;j<10; j++)
	{
		scanf_s("%c", &str[j],sizeof(str[j]));
		if (str[j] == '\n')
		{
			str[j] = '\0';
			break;
		}
	}

	n = strlen(str);
	printf("The new string is \n");
	for (int i = n-1;i>=0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}