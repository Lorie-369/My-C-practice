#include "function.h"
#include <stdio.h>
#include <string.h>
//test:****|*|*-**|*-**|---|     --> hello
void Morse_code(void)
{
	int flag = 1;
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
	char code[6];
	char space;
	scanf_s("%c", &space,sizeof(space));  //����4֮���»س��������ｫ�س��������ó�������һ���ַ������У���Ȼ��������ĵ�һ���ַ������ȡʱ�����з���ȡΪ��һ�������µ�һ������ĸ����û�У��Ҳ������ϵ�������
	printf("Enter the code:\nEnter q to quit.\n");
	for (int n = 0; n < 100; n++)
	{
		scanf_s("%c", &str[n], sizeof(str[n]));
		if (str[n] == 'q')
		{
			str[n] = '\0';
			break;
		}
	}
	printf("The meaning of the code is:\n");
	for (i = 0; i < strlen(str); i++)
	{
		code[k++] = str[i];
		//printf("%c", str[i]);
		if (str[i] == '|' || str[i] == '\0')
		{
			code[k - 1] = '\0';
			//printf("%d\n", strlen(code));//58-61�о�Ϊ����
			//printf("%s\n", code);
			//if (code[0] == '\n')
			//	printf("!!!!!!");
			//printf("%d\n", strlen(ch[4]));
			//printf("%c\n", ch[4][0]);
			for (j = 0; j < 26; j++)   //
			{
				if (strlen(code) == strlen(ch[j]))
				{
					/*for (unsigned m = 0; m < strlen(code); m++)  //����Ƚϣ������Ϊ���£����ǿ��У�������������Ĵ�������ַ����Ƚϵó���������������
					{                                              //����֮ǰ��������Ƚϣ���Ϊ�˽�����ֽ⣬�ҵ�����Ĳ��֣������ҵ��ĳ���Ĳ���Ϊ�����з���ȡ����һ���ַ������У����ڵĴ�����������
						int a = code[m];
						int b = ch[j][m];
						//if (b == 42)
							//b = 10;
						//else if (b == 45)
							//b =13;
						//printf("%c\t", code[m + 1]);
						//printf("%c\n", ch[j][m]);
						//printf("%d\t%d\n", a, b);
						if (a != b)
						{
							flag = 0;

							//printf("+++");
						}
					}
					//printf("%d\n", flag);
					if (flag == 1)
					{
						printf("%c", j + 'a');
						break;
					}
					flag = 1;
					//printf("%d\n", flag);
					*/


					if (!strncmp(code, ch[j], strlen(ch[j])))//
					{

						printf("%c", j + 'a');
						//break;
					}
					/*else    //���ڼ���Ĵ���
					{
						printf("%d", strlen(ch[j]));
						printf("&&&");
					}*/

				}

			}
			k = 0;
		}

	}
	return;
}




