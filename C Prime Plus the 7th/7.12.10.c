#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.28
int tax(double salary,double limit);
int again(void);
int main(void)
{
	int input;
	double salary;
	printf("There are some sorts.\n");
	printf("1)single\t\t\t2)householder\n3)married\t\t\t4)divorce\n5)quit.\n");
	printf("Enter your choice :");
	scanf_s("%d", &input);
	while (input != 5)
	{
		printf("Please enter your salary :");
		scanf_s("%lf", &salary);
		switch (input)
		{
		case 1:input =tax(salary, 17850); break;
		case 2:input = tax(salary, 23900); break;
		case 3:input = tax(salary, 29750); break;
		case 4:input = tax(salary, 14875); break;
		default:input=again();
		}
	}
	printf("\nDone!\n");
	return 0;
}

int tax(double salary, double limit)
{
	int input;
	double tax;
	if (salary <= limit)
	{
		tax = salary * RATE1;
	}
	else
	{
		tax = limit * RATE1 + (salary - limit) * RATE2;
	}
	printf("The tax is %.2lf\n", tax);
	printf("There are some sorts.\n");
	printf("1)single\t\t\t2)householder\n3)married\t\t\t4)divorce\n5)quit.\n");
	printf("Enter your choice :");
	scanf_s("%d", &input);
	return input;
}
int again(void)
{
	int input;
	printf("The input is wrong.\nPlease enter a number between 1 and 5!\n");
	printf("There are some sorts.\n");
	printf("1)single\t\t\t2)householder\n3)married\t\t\t4)divorce\n5)quit.\n");
	printf("Enter your choice :");
	scanf_s("%d", &input);
	return input;
 }