#include <stdio.h>


double f(int n, int x);


int main()
{
	int n, x;
	printf("input n & x:");
	scanf("%d,%d", &n ,&x);
	printf("n=%d,x=%d\nP%d(%d)=%.2lf", n, x, n, x, f(n, x));
}


double f(int n, int x)
{
	if (n == 0)
	{
		return 1.0;
	}
	else if (n == 1)
	{
		return (double)x;
	}
	else if (n > 1)
	{
		return ((2*n-1)*x-f(n-1,x)-(n-1)*f(n-2,x))/n;
	}
}
