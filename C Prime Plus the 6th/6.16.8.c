#include <stdio.h>
int main(void)
{
	float a, b;
	int k = 0;
	printf("Enter two float : ");
	k=scanf_s("%f %f", &a, &b);
	while (k == 2)
	{
		if (a < b)
		{
			float temp;
			temp = a;
			a = b;
			b = temp;
		}
		printf("The result is %f\n", (a - b) / (a + b));
		printf("Enter two float : ");
		k = scanf_s("%f %f", &a, &b);
	}
	printf("\nDone!\n");
	return 0;
}