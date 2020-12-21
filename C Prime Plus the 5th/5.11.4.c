#include <stdio.h>
#define INCH 2.54
#define FOOT 30.48
int main(void)
{
	float input;
	printf("Enter a height of a person:");
	scanf_s("%f", &input);
	while (input>0)
	{
		printf("%.1fcm = %.1f feet,%.1f inches.\n\n", input, input / FOOT, input / INCH);
		printf("Enter a height in centimeters.(<=0 to qiut)");
		scanf_s("%f", &input);
	}
	printf("Bye\n");
	return 0;
}