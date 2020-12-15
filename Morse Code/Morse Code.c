#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch[26][5];
	strcpy_s(ch[0], strlen("*-") + 1, "*-");//a
	strcpy_s(ch[1], strlen("-***") + 1, "-***");//b
	strcpy_s(ch[2], strlen("-*-*") + 1, "-*-*");//c
	strcpy_s(ch[3], strlen("-**") + 1, "-**");//d
	strcpy_s(ch[4], strlen("*") + 1, "*");//e
	strcpy_s(ch[5], strlen("**-*") + 1, "**-*");//f
	strcpy_s(ch[6], strlen("--*") + 1, "--*");//g
	strcpy_s(ch[7], strlen("****") + 1, "****");//h
	strcpy_s(ch[8], strlen("**") + 1, "**");//i
	strcpy_s(ch[9], strlen("*---") + 1, "*---");//j
	strcpy_s(ch[10], strlen("-*-") + 1, "-*-");//k
	strcpy_s(ch[11], strlen("*-**") + 1, "*-**");//l
	strcpy_s(ch[12], strlen("--") + 1, "--");//m
	strcpy_s(ch[13], strlen("-*") + 1, "-*");//n
	strcpy_s(ch[14], strlen("---") + 1, "---");//o
	strcpy_s(ch[15], strlen("*--*") + 1, "*--*");//p
	strcpy_s(ch[16], strlen("--*-") + 1, "--*-");//q
	strcpy_s(ch[17], strlen("*-*") + 1, "*-*");//r
	strcpy_s(ch[18], strlen("***") + 1, "***");//s
	strcpy_s(ch[19], strlen("-") + 1, "-");//t
	strcpy_s(ch[20], strlen("**-") + 1, "**-");//u
	strcpy_s(ch[21], strlen("***-") + 1, "***-");//v
	strcpy_s(ch[22], strlen("*--") + 1, "*--");//w
	strcpy_s(ch[23], strlen("-**-") + 1, "-**-");//x
	strcpy_s(ch[24], strlen("-*--") + 1, "-*--");//y
	strcpy_s(ch[25], strlen("--**") + 1, "--**");//z

	int  j, k = 0;
	unsigned i;
	char str[100];
	char code[5];
	printf("Enter the code:\n");
	for (int n = 0; n < 100; n++)
	{
		scanf_s("%c", &str[n],sizeof(str[n]));
		if (str[n] == '\n')
		{
			str[n] = '\0';
			break;
		}
	}
	printf("The meaning of the code is:\n");
	for (i = 0; i<=strlen(str); i++)
	{
		code[k++] = str[i];
		if (str[i] == '\n')
			break;
		if (str[i] == '|' || str[i] == '\0')
		{
			code[k - 1] = '\0';
			for (j = 0; j < 26; j++)
			{
				if (strlen(code) == strlen(ch[j]))
				{
					if (!strcmp(code, ch[j]))
					{
						printf("%c", j + 'a');
						break;
					}
				}
			}
			k = 0;
		}
		
	}

	return 0;
}