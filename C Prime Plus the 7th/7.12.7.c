#include <stdio.h>
#define SALARY 10
#define SALARY_BASIC 400
#define OVERTIME 15
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define TAX1 45
#define TAX2 30

int main(void)
{
	double input;
	double salary = 0;
	double tax = 0;
	printf("Enter the hours you worked this week (h): ");
	scanf_s("%lf", &input);
	if (input <= 40)
	{
		salary = input * SALARY;
	}
	else
		salary = SALARY_BASIC + (input - 40) * OVERTIME;
	if (salary <= 300)
	{
		tax = salary * RATE1;
	}
	else if (salary < 450)
	{
		tax = TAX1 + (salary - 300) * RATE2;
	}
	else
	{
		tax = (double)TAX1 +(double)TAX2 + (salary - 450) * RATE3;
	}

	printf("\nthe total salary is %.2lf\nthe tax is %.2lf\nthe net income is %.2lf\n\n", salary, tax, salary - tax);
	return 0;
}