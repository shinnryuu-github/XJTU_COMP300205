#include <stdio.h>

int main()
{
	int m,n;
	printf("请输入两个正整数n,m:");
	scanf("%d, %d",&m, &n);
	int a,b,factor,mul;
	a = 1;
	while(a <= m || a <= b)
	{
		if (m % a == 0 && n % a == 0)
		{
			factor = a;
		}
		a++;
	}
	printf("它们的最大公约数为:%d\n",factor);
	b = m * n;
	while(b >= m && b >= n)
	{
		if (b % m == 0 && b % n == 0)
		{
			mul = b;
		}
		b -= 1;
	}
	printf("它们的最小公倍数为:%d",mul);
}
