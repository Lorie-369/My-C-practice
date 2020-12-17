#include <stdio.h>
int main(void)
{
	double Dap = 100, Dei = 100;
	int i = 0;
	do 
	{
		i++;
		Dap += 10;
		Dei *= 1.05;
	} while (Dap>=Dei);
	printf("After %d years:\nDaphne : %.2lf\nDeirdre : %.2lf\n\n", i, Dap, Dei);
	return 0;
}