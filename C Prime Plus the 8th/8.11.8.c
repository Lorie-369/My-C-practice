#include <stdio.h>
void add(float num1, float num2);
void subtract(float num1, float num2);
void multiply(float num1, float num2);
void divide(float num1, float num2);
int main(void)
{
	char input,space;
	char str[20];
	float num1 = 0, num2 = 0;
	printf("Enter the operation of your choice.\n");
	printf("a.add\t\t\t\ts.subtract\nm.m.multiply\t\t\td.divide.\nq.quit.\n");
	scanf_s("%c", &input,sizeof(input));
	while (input == 'a' || input == 's' || input == 'm' || input == 'd' )
	{
		int flag1, flag2;
		printf("Enter first number :");
		flag1=scanf_s("%f", &num1);
		if (flag1 == 0)
		{
			scanf_s("%s", str, sizeof(str));
			printf("This is not a number.\nPlease enter a number,such as 2.5 , -1.78E8,or 3:");
			scanf_s("%f", &num1);
		}
		printf("Enter second number :");
		flag2=scanf_s("%f", &num2);
		if (flag2 == 0)
		{
			scanf_s("%s", str, sizeof(str));
			printf("This is not a number.\nPlease enter a number,such as 2.5 , -1.78E8,or 3:");
			scanf_s("%f", &num2);
		}
		switch (input)
		{
		case 'a':add(num1, num2); break;
		case 's':subtract(num1, num2); break;
		case 'm':multiply(num1, num2); break;
		case 'd':divide(num1, num2); break;
		}
		space = getchar();
		printf("\nEnter the operation of your choice.\n");
		printf("a.add\t\t\t\ts.subtract\nm.m.multiply\t\t\td.divide.\nq.quit.\n");
		scanf_s("%c", &input,sizeof(input));
	}
	printf("\nDone!\n");
	return 0;
}

void add(float num1, float num2)
{
	float sum;
	sum = num1 + num2;
	printf("%.2f + %.2f = %.2f", num1, num2, sum);
	return;
}

void subtract(float num1, float num2)
{
	float subtract;
	subtract = num1 - num2;
	printf("%.2f - %.2f = %.2f", num1, num2, subtract);
	return;
}

void multiply(float num1, float num2)
{
	float multiply;
	multiply = num1 * num2;
	printf("%.2f * %.2f =%.2f", num1,num2, multiply);
	return;
}

void divide(float num1, float num2)
{
	float num3;
	float divide;
	if (num2 == 0)
	{
		printf("Enter a number other than 0 :");
		scanf_s("%f", &num3);
		divide = num1 / num3;
		printf("%.2f / %.2f = %.2f ", num1, num3, divide);
	}
	else {
		divide = num1 / num2;
		printf("%.2f /%.2f = %.2f ", num1, num2, divide);
	}
	return;
}

