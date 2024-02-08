#include <stdio.h>

int main()
{
	double d = 300000;
	double p = 6000;
	double i = 0.01;
	double m = 0;
	while(d >= p)
	{
		d = d + (d * i) - p;
		m ++;
	}
	m += d / (p);
	printf("m=%.2lf", m);
}
