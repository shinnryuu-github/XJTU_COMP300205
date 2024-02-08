#include <stdio.h>

int main()
{
	int a, n;
	scanf("%d,%d", &a, &n);
	int i, r = 0;
	for (i = 1; i <= n; i++)
	{
		r = r * 10 + a * i;
	}
	printf("S=%d",r);
}
