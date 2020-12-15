/*自己写了个简单的头文件并在源文件中引用；
* 此头文件的功能有：
1.输出爱心（函数，循环）
2.冒泡法排序（循环嵌套）
3.hanoi塔问题（递归）
4.Morse code 密码破译（用*代表·）(字符数组读取+字符比较）*/

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