#include <stdio.h>
#define ONION 2.05
#define BEET 1.15
#define CARROT 1.09
#define DISCOUNT 0.05
#define FREE1 6.5
#define FREE2 14
#define ADD 0.5

int main(void)
{
	double onion = 0, beet = 0, carrot = 0, sum = 0, total_pounds = 0, trans = 0,discount=0;
	double onion_add = 0, beet_add = 0,carrot_add = 0;
	int input;
	int k;
	printf("There are some vagetables saled :\n");
	printf("1)onion\n2)beet\n3)carrot\n");
	printf("Enter your choice.\nEnter q to end shopping.\n");
	k=scanf_s("%d", &input);
	while (k == 1)
	{
		switch (input)
		{
		case 1:printf("Enter the pound :"); scanf_s("%lf", &onion_add); onion += onion_add; break;
		case 2:printf("Enter the pound :"); scanf_s("%lf", &beet_add); beet += beet_add; break;
		case 3:printf("Enter the pound :"); scanf_s("%lf", &carrot_add); carrot += carrot_add; break;
		default:printf("The input is wrong!\nPlease enter a number between 1 and 3 or q to quit.\n");
		}
		printf("There are some vagetables saled :\n");
		printf("1)onion\n2)beet\n3)carrot\n");
		printf("Enter your choice.\nEnter q to end shopping.\n");
		k = scanf_s("%d", &input);
	}
	sum = onion * ONION + beet * BEET + carrot * CARROT;
	if (sum > 100)
	{
		discount = sum * 0.05;
		sum *= 0.95;

	}
	total_pounds = onion + beet + carrot;
	if (total_pounds <= 5)
		trans = FREE1;
	else if (total_pounds <= 20)
		trans = FREE2;
	else
		trans = FREE2 + (total_pounds - 20) * ADD;
	printf("The total pounds is %.2lf\n", total_pounds);
	printf("The sum is %.2lf\n", sum);
	printf("The discount is %.2lf\n", discount);
	printf("The transpotation is %.2lf\n", trans);
	printf("The total sum is %.2lf\n", sum + trans);
	return 0;
}
