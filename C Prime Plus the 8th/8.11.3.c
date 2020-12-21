#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
	char str[20];
	int lower = 0, upper = 0,n=0;
	printf("Please enter a string.\n");
	for (int i = 0; i < 20; i++)
	{
		 scanf_s("%c", &str[i],sizeof(str[i]));
		 if (str[i] == '\n')
		 {
			 str[i] = '\0';
			 break;
		 }
		else if (islower(str[i]))
			lower++;
		else if (isupper(str[i]))
			upper++;
	}
	n = strlen(str);
	printf("There are %d char in this string.\nThere are %d lower.\nThere are %d upper.\n", n, lower, upper);
	return 0;
}