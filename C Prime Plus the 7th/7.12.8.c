#include <stdio.h>
#define OVERTIME 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define GRADE1 8.75
#define GRADE2 9.33
#define GRADE3 10.00
#define GRADE4 11.20

void print(void);
void again(void);
int outcome(double per,double hours);
int main(void)
{
	double hours = 0, per = 0;
	int choice = 0;
	print();
	printf(" the number corresponding to the desired pay rate or action are follows.\n");
	printf("1)$%.2lf/hr\t\t\t", 8.75);
	printf("2)$%.2lf/hr\n", 9.33);
	printf("3)$%.2lf/hr\t\t\t", 10.00);
	printf("4)$%.2lf/hr\n", 11.20);
	printf("5)quit\n");
	print();
	printf("Enter you choice : ");
	scanf_s("%d", &choice);
	while (choice != 5)
	{
		switch (choice)
		{
		case 1:per = GRADE1; printf("Enter the hours:"); scanf_s("%lf", &hours);  break;
		case 2:per = GRADE2; printf("Enter the hours:"); scanf_s("%lf", &hours); break;
		case 3:per = GRADE3; printf("Enter the hours:"); scanf_s("%lf", &hours);  break;
		case 4:per = GRADE4; printf("Enter the hours:"); scanf_s("%lf", &hours);  break;
		default:again();
		}
		choice= outcome(per, hours);
	}
	printf("\nDone!\n");
	return 0;
}

void print(void)
{
	for (int i = 0; i < 100; i++)
		printf("*");
	printf("\n");
}

int outcome(double per,double hours)
{
	double salary = 0, tax = 0;
	int choice = 0;
	if (hours <= 40)
		salary = hours * per;
	else
		salary = per * 40 + (hours - 40) * 10 * OVERTIME;

	if (salary <= 300)
		tax = salary * RATE1;
	else if (salary < 450)
		tax = 300 * RATE1 + (salary - 300) * RATE2;
	else
		tax = 300 * RATE1 + 150 * RATE2 + (salary - 450) * RATE3;
	printf("\nThe salary is %.2lf\nthe tax is %.2lf\nthe net income is %.2lf\n.", salary, tax, salary - tax);
	print();
	printf(" the number corresponding to the desired pay rate or action are follows.\n");
	printf("1)$%.2lf/hr\t\t\t", 8.75);
	printf("2)$%.2lf/hr\n", 9.33);
	printf("3)$%.2lf/hr\t\t\t", 10.00);
	printf("4)$%.2lf/hr\n", 11.20);
	printf("5)quit\n");
	print();
	printf("Enter you choice : ");
	scanf_s("%d", &choice);
	return choice;
}

void again(void)
{
	int choice = 0;
	printf("\nThe input is wrong.\nPlease enter the number between 1 and 5!\n");
	print();
	printf(" the number corresponding to the desired pay rate or action are follows.\n");
	printf("1)$%.2lf/hr\t\t\t", 8.75);
	printf("2)$%.2lf/hr\n", 9.33);
	printf("3)$%.2lf/hr\t\t\t", 10.00);
	printf("4)$%.2lf/hr\n", 11.20);
	printf("5)quit\n");
	print();
	printf("Enter you choice : ");
	scanf_s("%d", &choice);
	return;
}
