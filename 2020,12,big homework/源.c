/*�Լ�д�˸��򵥵�ͷ�ļ�����Դ�ļ������ã�
* ��ͷ�ļ��Ĺ����У�
1.������ģ�������ѭ����
2.ð�ݷ�����ѭ��Ƕ�ף�
3.hanoi�����⣨�ݹ飩
4.Morse code �������루��*������(�ַ������ȡ+�ַ��Ƚϣ�*/

#include <stdio.h>
#include <string.h>
#include "function.h"
int main(void)
{
	int flag = 0;
	printf("Hello!\n");
	printf("Enter 1 and you will receive a heart shaped picture!\n");
	printf("Enter 2 and you can use the bubble sort!\n");
	printf("Enter 3 and you can solve the hanoi question.\n");
	printf("Enter 4 to get the meaning of the Morse Code.\n");
	printf("Enter q to quit!\n");
	while (scanf_s("%d", &flag))
	{
		switch (flag)
		{
		case 1:heart_shape(); break;
		case 2:bubble_sort(); break;
		case 3:hanoi_solution(); break;
		case 4:Morse_code(); break;
		}
		printf("\n");
		printf("Enter 1 and you will receive a heart shaped picture!\n");
		printf("Enter 2 and you can use the bubble sort!\n");
		printf("Enter 3 and you can solve the hanoi question.\n");
		printf("Enter 4 to get the meaning of the Morse Code.\n");
		printf("Enter q to quit!\n");
	}
	return 0;
}