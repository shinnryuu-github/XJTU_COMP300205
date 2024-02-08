#include <stdio.h>

int main()
{
	printf("enter a positive number:");
	double x, r, f;
	scanf("%lf", &x);
	r = (x + 1) / 2;
	do
	{
		f = r;
		r = (f + x / f) / 2; 
	}
	while((r - f) > 0.00001 || (r - f) < -0.00001);
	printf("The square root of %.2lf is %.5lf", x, r);
}
