#include <stdio.h>
int main(void)
{
	char str[20];
	int space = 0, line_break = 0, others = 0;
	printf("Enter a string.\n");
	for (int i = 0; i < 20; i++)
	{
		scanf_s("%c", &str[i],sizeof(str[i]));
		if (str[i] == '#')
		{
			str[i] = '\0';
			break;
		}
		else if (str[i] == ' ')
			space++;
		else if (str[i] == '\n')
			line_break++;
		else
			others++;
	}
	printf("There are %d space,%d line break,%d others.\n\n",space,line_break,others);
	return 0;
}