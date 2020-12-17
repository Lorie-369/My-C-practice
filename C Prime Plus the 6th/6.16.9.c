#include <stdio.h>
void result(float a, float b);
int main(void)
{
	float a, b;
	int k;
	printf("Enter two float : ");
	k=scanf_s("%f %f", &a, &b);
	while (k == 2)
	{
		result(a, b);
		printf("\nEnter two float : ");
		k = scanf_s("%f %f", &a, &b);
	}
	printf("\nDone!\n");
	return 0;
}

void result(float a, float b)
{
	if (a < b)
	{
		float temp;
		temp = a;
		a = b;
		b = temp;
	}
	printf("The result is %.2f\n", (a - b) / (a + b));
}