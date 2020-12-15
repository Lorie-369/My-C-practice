#include <stdio.h>
void Temperatures(double fah);
int main(void)
{
	double input;
	printf("Enter a temperature (fahrenheit) £º");
	while ((scanf_s("%lf", &input)) == 1)
	{
		Temperatures(input);
		printf("Enter a temperature(fahrenheit)\nEnter q to quit.\n ");
	}
	printf("Done!\n");
	return 0;
}

void Temperatures(double fah)
{
	const double cent_change = 32.0;
	const double kel_change= 273.16;
	double cent, kel;
	cent = 5.0 / 9.0 * (fah - cent_change);
	kel = cent + kel_change;
	printf("\nfah is %.2lf¨H\ncent is %.2lf¡æ\nkel is %.2lfK\n", fah, cent, kel);
	return;
}