#include <stdio.h>
int main(void)
{
	int num1, num2;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand : ");
	scanf_s("%d", &num2);
	printf("Now enter the first operand : ");
	scanf_s("%d", &num1);
	while (num1 > 0)
	{
		printf("\n%d %% %d is %d \n", num1, num2, num1 % num2);  //打印%时要输入%%才能实现
		printf("Enter next number for first operand(<=0 to quit.) : ");
		scanf_s("%d", &num1);
	}
	printf("\nDone.\n");
	return 0;
}