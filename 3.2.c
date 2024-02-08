#include <stdio.h>

int main()
{
	double AMOUNT = 1000.0;
	double p1, p2, p3, p4, p5;
	int i;
	p1 = AMOUNT + 5 * AMOUNT * 0.03;
	printf("p1=%.6lf\n", p1);
	p2 = AMOUNT + 2 * AMOUNT * 0.021;
	p2 += 3 * p2 * 0.0275;
	printf("p2=%.6lf\n", p2);
	p3 = AMOUNT + 3 * AMOUNT * 0.0275;
	p3 += 2 * p3 * 0.021; 
	printf("p3=%.6lf\n", p3);
	p4 = AMOUNT;
	for(i = 0; i < 5; i++)
	{
		p4 += p4 * 0.015;
	}
	printf("p4=%.6lf\n", p4);
	p5 = AMOUNT;
	for(i = 0; i < 20; i++)
	{
		p5 += p5 * 0.0035 / 4.0;
	}
	printf("p5=%.6lf\n", p5);
}
