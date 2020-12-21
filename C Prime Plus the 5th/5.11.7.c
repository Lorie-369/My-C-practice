#include <stdio.h>
void cube(double x);
int main(void)
{
	double input;
	printf("Enter a double : ");
	scanf_s("%lf", &input);
	cube(input);

	return 0;
}

void cube(double x)
{
	double y;
	y = x * x * x;
	printf("\nThe cube of %.2lf is :%.2lf\n", x, y);
	return;
}